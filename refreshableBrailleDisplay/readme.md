Hi peeps! This is my submission for SD Hacks 2018, held between October 12 (2018) - October 14 (2018).

Keep in mind that this is simply a proof of concept, and not a complete, workable, production device (I'm even missing the sixth servo because I didn't realize I was one short!! The point is to show this is a completely viable idea without spending a thousand dollars on a refreshable braille display.

## Why a Refreshable Braille Display?

<img src="refreshableBrailleDisplay.gif" />
<h8>(the above says "Hello world!" in braille!!)</h8><br/><br/>
To show that this thing is possible to make! Modern devices make a premium on this technology, which is insane! The point of making this is to show a proof-of-concept that this kind of device does not have to cost $1000. I just want this to be a useful library to as many people as possible.

# The SD Hacks Submission Description

## Inspiration

I think refreshable braille displays are overpriced. I was pretty sure I could recreate one using an Arduino Uno and some servos... and so I did.

## What it does
It's a single Refreshable Braille Display character. It displays braille characters using six servos and an Arduino Uno. It works well for just being one character, and it can scale to however many characters you might need. When scaled to more than one character, the general idea would be to have a moving window of N characters, and just propagate each new character along the chain until the characters had been read.

## How I built it
Using a single Arduino Uno, 6 servos (hoping to rent one from MLH Hardware before demos), jumper cables, hot glue, cardboard, and a breadboard. The biggest time sink of this project was definitely the enclosure (if you can even call it that haha!). Just a simple cardboard cuboid with a slanted display for the braille character. Took about 20 hours to think through the external design as well as the software design. 

## Challenges I ran into
STILL trying to figure out how to make it such that the braille nubbins would pop up as I had imagined it. I assume if I were to switch out the servos for small pistons, it could work as intended. Other than that, I wish I had counted the amount of servos I had before I got into this because I would have known to rent a 6th servo before I started!

## Accomplishments that I'm proud of
I built most of the library in about six hours which is good in my opinion. The cost of this project in whole is _maybe_ $60, which is a drop in the bucket compared to modern $1000 devices. I think if I had access to industrial suppliers of parts, I could probably scale this to a 10-character display that had a complete, interactive user experience. All for at most $100; an order of magnitude less than modern refreshable braille displays.
 
## What I learned
Verify that you have all the components you need to do the thing you want to do! Maybe I should have planned a little more and bought better components than just use the servos I had. Again, the piston idea could have looked and worked better, had I thought of it sooner. Still a fun project overall.

## What's next for Refreshable Braille Display
Open-source the library and build it out a little bit more. I know there is an advanced version of Braille where they use common letter pairs like 'sh' and 'ch' and 'th'. I could put that into the library and maybe use tries to get an O(1) lookup time for N+1 character/character pairs. That would be something.

I think it would be helpful to try and mass-produce some kind of accessible device that has this library in it. I am not quite aware of the current state of the market or demand of refreshable braille displays, but I think it would be useful to at least one person which is good enough for me.

# Credit

How to wire up a servo: https://www.youtube.com/watch?v=SfmHNb5QAzc <br/>
The braille alphabet, number, and punctuation notation: https://www.pharmabraille.com/pharmaceutical-braille/the-braille-alphabet/

Anyway, thanks for checking this sketch out! I appreciate it!
