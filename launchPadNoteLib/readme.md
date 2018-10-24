
# Why a Buzzer Music Note Library [for the Texas Instruments MSP432P401R]?

This work was inspired by the Texas Instruments Prototyping with 
Microcontrollers event that occurred on 24 October, 2018.

I asked one of the Texas Instruments representatives[needs verification on title]
if I could expand on the pre-existing work by Dung Dang and if maybe it could
be included in their future demos. This is the result.

This is an expansion on Dung Dang's work with the Texas Instruments LaunchPad
microcontroller to create musical tones with the Grove buzzer. I just 
restructured a few things and added some functions and we have a more expanded
musical note library for buzzers!

# Previous notes 

Grove: Music Note Library
    Uses tone() function to simulate music note generation.

Dec 2012: Created for Educational BoosterPack
    buzzer Pin = 19

Dec 2013: Modified for Educational BoosterPack MK II
    buzzer Pin = 40

Jun 2016: Modified for Grove Buzzer
    buzzer Pin = 40

Oct 2018: Restructuring and optimizing by David Amante; 
    Original work by Dung Dang

# Technical Notes

Just to clarify, naming conventions are as follows: <br/>
<XN#>: 
    <Note letter, Natural/Sharp/Flat, Octave number>
    Example: CS1 == (C-sharp, octave 1)
    Example: DN6 == (D-natural, octave 6)

Why are these note frequencies whole numbers?
    This is because of the Tone() definition by Arduino. The frequency variables
    are defined by unsigned int, which are by definition whole numbers.



# Credit
[1] Why use const instead of #define: https://stackoverflow.com/questions/6442328/what-is-the-difference-between-define-and-const <br/>
[2] Definition of Arduino's Tone() function: https://www.arduino.cc/reference/en/language/functions/advanced-io/tone/ <br/>
[3] The note-to-frequency value reference: https://pages.mtu.edu/~suits/notefreqs.html <br/>
Thanks for checking out this sketch/library of mine [original work by Dung Dang]! Much love.
