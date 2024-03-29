*********************************
Updating ESP-IDF Tools on Windows
*********************************

:link_to_translation:`zh_CN:[中文]`

.. _get-started-install_bat-windows:

Install ESP-IDF Tools Using a Script
====================================

From the Windows Command Prompt, change to the directory where ESP-IDF is installed. Then run::

    install.bat

For Powershell, change to the directory where ESP-IDF is installed. Then run::

    install.ps1

This downloads and installs the tools necessary to use ESP-IDF. If the specific version of the tool is already installed, no action will be taken. The tools are downloaded and installed into a directory specified during ESP-IDF Tools Installer process. By default, this is ``C:\Users\username\.espressif``.

.. _get-started-export_bat-windows:

Add ESP-IDF Tools to PATH Using an Export Script
================================================

ESP-IDF tools installer creates a Start menu shortcut for "ESP-IDF Command Prompt". This shortcut opens a Command Prompt window where all the tools are already available.

In some cases, you may want to work with ESP-IDF in a Command Prompt window which was not started using that shortcut. If this is the case, follow the instructions below to add ESP-IDF tools to PATH.

In the command prompt where you need to use ESP-IDF, change to the directory where ESP-IDF is installed, then execute ``export.bat``::

    cd %userprofile%\esp\esp-idf
    export.bat

Alternatively in the Powershell where you need to use ESP-IDF, change to the directory where ESP-IDF is installed, then execute ``export.ps1``::

    cd ~/esp/esp-idf
    export.ps1

When this is done, the tools will be available in this command prompt.
