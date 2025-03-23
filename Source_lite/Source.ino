// include goose to use the sight app
#include "goose.h"

// includes go here

/*
*    Functions from the goose file to make full use of the Sight app:
*
*    PRINT("your string");        // Normal print statement (serial.print also works)
*    GRAPH("label", data, TOP);   // Add data to the top graph
*    GRAPH("label", data, BOT);   // Add data to the bottom graph
*
*    START_REC;                   // Start recording on sight
*    END_REC;                     // End recording on sight
*
*    END_LOG;                     // Stop the data logging (this is the same as println)
*
*    For more go to: https://github.com/Sidekick-Robotics/Sight/blob/main/README.md
*/

// Definitions go here

void setup()
{
    // Code to run once goes here.
}

void loop()
{
    // Code to loop goes here.
    END_LOG;
}
