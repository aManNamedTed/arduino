# Why a (Prototype) LaunchPad Music Library <br/>[for the Texas Instruments MSP432P401R]?

[MSP-EXP432P401R](http://www.ti.com/tool/msp-exp432p401r "The Board Texas Instruments Demo'd for UCSD")

This work was inspired by the Texas Instruments Prototyping with 
Microcontrollers event that occurred on 24 October, 2018.
> Disclaimer: I did not have a LaunchPad to prototype this library on, so the
> actual output of the generated notes may not be consistent with expectations.

I asked one of the Texas Instruments representatives (needs verification on title)
if I could expand on the pre-existing work by Dung Dang and if maybe it could
be included in their future demos. This is the result.

This is an expansion on Dung Dang's work with the Texas Instruments LaunchPad
microcontroller to create musical tones with the Grove buzzer. I just 
restructured a few things and added some functions and we have a more expanded
musical note library for buzzers!

# Previous Notes 

Grove: Music Note Library<br/>
    Uses tone() function to simulate music note generation.<br/>

Dec 2012: Created for Educational BoosterPack<br/>
    buzzer Pin = 19 <br/>

Dec 2013: Modified for Educational BoosterPack MK II<br/>
    buzzer Pin = 40<br/>

Jun 2016: Modified for Grove Buzzer<br/>
    buzzer Pin = 40<br/>

Oct 2018: Restructuring and optimizing by David Amante; <br>
    Original work by Dung Dang<br/>

# Technical Notes

Just to clarify, naming conventions are as follows: <br/>
<X, N, #>: <br/>
    <Note letter, Natural/Sharp/Flat, Octave number><br/>
    Example: CS1 == (C-sharp, octave 1)<br/>
    Example: DN6 == (D-natural, octave 6)<br/>

Why are these note frequencies whole numbers?
>   This is because of the Tone() definition by Arduino. The frequency variables
>   are defined by an unsigned int, which are by definition whole numbers.

# What next?

One major improvement that immediately comes to mind would be to modularize this
code into .h and .cpp files so that you could just include it as a library in 
your sketch, but that would take documentation and hours I do not currently have.

Maybe after midterm season I can implement that structure.

# Credit
[1] Why use const instead of #define: https://stackoverflow.com/questions/6442328/what-is-the-difference-between-define-and-const <br/>
[2] Definition of Arduino's Tone() function: https://www.arduino.cc/reference/en/language/functions/advanced-io/tone/ <br/>
[3] The note-to-frequency value reference: https://pages.mtu.edu/~suits/notefreqs.html <br/>

Thanks for checking out this sketch/library of mine (original work by Dung Dang)! Much love.
