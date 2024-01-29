
#include <ntddk.h>

NTSTATUS CustomDriverEntry(_In_ PDRIVER_OBJECT  saturniv, _In_ PUNICODE_STRING saturnivxyz)
{
	UNREFERENCED_PARAMETER(saturniv);
	UNREFERENCED_PARAMETER(saturnivxyz);
	
	DbgPrintEx(0, 0, "\n Successfully Loaded the Saturn test driver.");

	return 0;
}