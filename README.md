# Embedded-Systems-Projects
This repository contains 5 small projects on Embedded Systems.
1) Button LED. 
The files important to execute the project are - Button LED (file type - Proteus Project), switch (file type - uVision4 Project) and switch.hex (file type - HEX File).
The Proteus Project contains the simulation schematic. To view this file, you must have Proteus 8 Professional software.
The uVision4 Project contains the code in C language. To view this file, you must have Keil software.
The HEX File is generated using the C file in Keil itself. 
To simulate, open Proteus Project file and double click on the embedded system. In the "Edit Component" box, under "Program File" option, browse and select the HEX File (in this case switch.hex).
Now click OK followed by "Run Simulation" button on the down left corner of the schematic.

2) Packman
This folder contains 2 codes- a) Packman and b) Switch and String - To obtain a string when a switch is pressed and while the switch is not pressed, "NOT PRESSED" appears. 
Follow the same procedure as mentioned for the Button LED project. 
Use whichever HEX File is required - a) Packman - packman1.hex  b) Switch and String - lcd1.hex
To view code open uVision4 Project - a) Packman - packman1  b) Switch and String - lcd1
To view and simulate schematic, open Packman (file type - Proteus Project) for both codes.

3) Up-Down Counter
Up-Down Counter (file type - Proteus Project), 7segment (file type - uVision4 Project) and 7segment.hex (file type - HEX File)
This code gives a continuous up (0 to 9) and down (9 to 0) counter on a 7 segment LED.
Follow the same procedure as mentioned in Button LED project.

4) Up-Down Counter with a blank number
Up-Down Counter with a blank number (file type - Proteus Project), 7segment2 (file type - uVision4 Project) and 7segment2.hex (file type - HEX File)
This code gives a continuous up (0 to 9) and down (9 to 0) counter on a 7 segment LED except for the number 6, the 7 Segment LED goes blank whereas the normal LED glows.
You can vary the code to create a blank for a different number.
Follow the same procedure as mentioned in Button LED project.

5) Up-Down Seperate
Up-Down Seperate (file type - Proteus Project), 7segment1 (file type - uVision4 Project) and 7segment1.hex (file type - HEX File)
This code gives a continuous up (0 to 9) and down (9 to 0) counter on two 7 segment LEDs simultaneously. 
Follow the same procedure as mentioned in Button LED project.
