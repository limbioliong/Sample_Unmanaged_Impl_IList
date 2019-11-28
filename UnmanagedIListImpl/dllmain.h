// dllmain.h : Declaration of module class.

class CUnmanagedIListImplModule : public ATL::CAtlDllModuleT< CUnmanagedIListImplModule >
{
public :
	DECLARE_LIBID(LIBID_UnmanagedIListImplLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_UNMANAGEDILISTIMPL, "{28f19030-36fe-4bdf-b71a-1aa1d484b380}")
};

extern class CUnmanagedIListImplModule _AtlModule;
