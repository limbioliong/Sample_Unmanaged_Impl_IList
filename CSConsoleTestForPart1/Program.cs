using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSConsoleTestForPart1
{
    class Program
    {
        static void DoBasicListTest()
        {
            try
            {
                Type type = Type.GetTypeFromProgID("UnmanagedIListImpl.MyObjectList");
                Object obj = Activator.CreateInstance(type);

                IList pList = (IList)obj;

                // Do standard adding of items to pList.
                pList.Add((object)"John Lennon");
                pList.Add((object)"Paul McCartney");
                pList.Add((object)"George Harrison");
                pList.Insert(3, "Ringo Starr");
                pList.Add((object)((int)100));
                pList.Add((object)((bool)false));
                pList.Add((object)((float)10.123));

                // Check for existence of a specific item.
                bool bRetTemp = pList.Contains((object)"George Martin");
                if (bRetTemp == false)
                {
                    // If not found, add the item.
                    pList.Add((object)"George Martin");
                }
                // Check again. This time bRetTemp must be "true".
                bRetTemp = pList.Contains((object)"George Martin");

                // Modify an existing item's value.
                pList[4] = 101;
                // Get that item.
                object objTemp = pList[4];
                // Display its type and value.
                Console.WriteLine("Type : [{0:S}] Value : [{1}]", objTemp.GetType().ToString(), objTemp);

                // We remove "George Martin" and "John Lennon" from pList.
                pList.Remove("George Martin");
                pList.RemoveAt(0);

                // Now display current items in pList.
                // All previously added items will be there
                // except "George Martin" and "John Lennon".
                foreach (object item in pList)
                {
                    Console.WriteLine("Type : [{0:S}] Value : [{1}]", item.GetType().ToString(), item);
                }

                // Uncomment the following code to trigger ArgumentOutOfRangeException
                // exception.
                //pList.Insert(-1, "Billy Preston");
            }
            catch (ArgumentOutOfRangeException argex)
            {
                Console.WriteLine("{0:S}", argex.Message);
                Console.WriteLine("{0:S}", argex.Source);
            }
            catch (Exception ex)
            {
                Console.WriteLine("{0:S}", ex.ToString());
            }
        }

        static void Main(string[] args)
        {
            DoBasicListTest();
        }
    }
}
