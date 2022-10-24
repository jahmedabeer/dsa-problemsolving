# How to setup C/C++ for Visual Studio Code
1. [Setup Guide](https://code.visualstudio.com/docs/cpp/config-mingw)
2. Install Visual Studio Code.
3. [Install the C/C++ extension for VS Code](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)
4. [Install code runner to run code easily](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner)
5. [Get the latest version of Mingw-w64 via MSYS2](https://www.msys2.org/)
    - [Download the installer](https://github.com/msys2/msys2-installer/releases/download/2022-09-04/msys2-x86_64-20220904.exe)
    - Run the installer. MSYS2 requires 64 bit Windows 7 or newer.
    - After installtion MSYS2 is ready for you and a terminal
    - install gcc and g++ using this command: <code>pacman -S mingw-w64-x86_64-gcc</code>
    - install gdb using this command: <code>pacman -S mingw-w64-x86_64-gdb</code>
6. Check your MinGW installation (open cmd and run below commands)
    - gcc --version
    - g++ --version
    - gdb --version
7. Add the path to your Mingw-w64 bin folder to the Windows PATH environment variable