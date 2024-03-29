.. output_log

.. code-block:: none

    ...
    esptool esp32c6 -p /dev/ttyUSB0 -b 460800 --before=default_reset --after=hard_reset --no-stub write_flash --flash_mode dio --flash_freq 80m --flash_size 2MB 0x0 bootloader/bootloader.bin 0x10000 hello_world.bin 0x8000 partition_table/partition-table.bin
    esptool.py v4.3
    Serial port /dev/ttyUSB0
    Connecting....
    Chip is ESP32-C6 (revision v0.0)
    Features: WiFi 6, BT 5
    Crystal is 40MHz
    MAC: 60:55:f9:f6:01:38
    Changing baud rate to 460800
    Changed.
    Enabling default SPI flash mode...
    Configuring flash size...
    Flash will be erased from 0x00000000 to 0x00004fff...
    Flash will be erased from 0x00010000 to 0x00028fff...
    Flash will be erased from 0x00008000 to 0x00008fff...
    Erasing flash...
    Took 0.17s to erase flash block
    Writing at 0x00000000... (5 %)
    Writing at 0x00000c00... (23 %)
    Writing at 0x00001c00... (47 %)
    Writing at 0x00003000... (76 %)
    Writing at 0x00004000... (100 %)
    Wrote 17408 bytes at 0x00000000 in 0.5 seconds (254.6 kbit/s)...
    Hash of data verified.
    Erasing flash...
    Took 0.85s to erase flash block
    Writing at 0x00010000... (1 %)
    Writing at 0x00014c00... (20 %)
    Writing at 0x00019c00... (40 %)
    Writing at 0x0001ec00... (60 %)
    Writing at 0x00023c00... (80 %)
    Writing at 0x00028c00... (100 %)
    Wrote 102400 bytes at 0x00010000 in 3.2 seconds (253.5 kbit/s)...
    Hash of data verified.
    Erasing flash...
    Took 0.04s to erase flash block
    Writing at 0x00008000... (33 %)
    Writing at 0x00008400... (66 %)
    Writing at 0x00008800... (100 %)
    Wrote 3072 bytes at 0x00008000 in 0.1 seconds (269.0 kbit/s)...
    Hash of data verified.

    Leaving...
    Hard resetting via RTS pin...