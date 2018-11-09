### Log Entry [0]
So it's November 5th 2018, and I just learned that RGB LEDs distinct color fluctuations do not really register with the LED. So my idea was to use a(n) [Arduino] Mega and have the colors of the candles be RGB and cute but NO, using two colors for digitalWrite() and one for analogWrite() for those juicy RGB colors doesn't look all that great. So instead I am just going to use the Mega for its PWM slots and make a nice flicker function and have them offset on each candle so that it actually looks like--

Oh my gah. I could totally use a sensor to detect wind or something, or some kind of motion to make the flickered candles flicker in a manner that looks like real candles. Oh my god. That would be so sick.

I think for now I'm going to make them flicker, offset, then try to do the sensor + flicker with stimulus later.

For now, flicker function writing time! 
- 9:25PM

### Log Entry [1] (November 5, 2018)

WELL I guess random would work just fine. So the flicker looks good. I just restricted the range to not include 0 to 121 because those values were a little too low for this to look good.

SO NOW i have this cool idea i'm gonna try. I'm gonna put the ultrasonic sensor on this boy, and when i get close to it, i'll make it such that the leds will flicker on the lower end of the range so like 5 to 65 so that it looks like it's reacting to the motion/closeness. but i'll make it so that it only goes on for a second and then returns to normal random generations.
- 9:49PM

### Log Entry [2] (November 5, 2018)

Getting tired. Gonna hang it up until tomorrow to finish the button that will cycle through the amount of candles that are 'lit'.
- 10:22PM

### Log Entry [3] (November 8, 2018)

Just rearranged the initial format of the board. Looks cleaner and has a push button! Now I gotta put the button functionality to cycle through the days of the event and then I will make a .gif and make the usual "Why a [this project]?" title above. See you soon.
- 5:38PM

# Credit
[How to wire up an RGB LED](https://www.youtube.com/watch?v=5Qi93MjlqzE) <br/>
[How to generate random number with range in Arduino](https://www.arduino.cc/reference/en/language/functions/random-numbers/random/)
