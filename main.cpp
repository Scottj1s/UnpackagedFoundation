#include "pch.h"

#include "winrt/Microsoft.Windows.ApplicationModel.WindowsAppRuntime.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Microsoft::Windows::ApplicationModel::WindowsAppRuntime;

int main()
{
    init_apartment();
    auto runtimeVersion = RuntimeInfo::AsString();
    wprintf(L"Runtime Version: %s\n", runtimeVersion.c_str());
}
