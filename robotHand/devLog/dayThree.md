# 12-19-18 

Hello again. I finished the fingers and palm yesterday, now I just have to attach the servos and write out the plan. I wanna think that the code will be the easiest part and the structure will be the hardest. That's probably coming from my lack of experience with design.

## Update 3.0
So now I'm working on servo attachments, and the current goal is to create one structurally independent finger that can work with the servos' movement. If I can do that, that means I can expand on the 5-finger idea and thus have a fully working servo hand. The one issue I can imagine right now is how I'm going to deal with the opposable thumb and its two axes of rotation rather than just one like the other four digits.

Also usually when I format a breadboard with projects I like to make the breadboard pretty, so here's an inner dialog of how I go about doing that:

### How do I group these pins into something readable?
>> Well there's either 14 or 15 (if I give two axes to the thumb). Either three servos per non-thumb digit, and either two or three for the thumb, which makes either 14 or 15 servos.

### Okay so how should I group these [servos]? 
>> Well I'm trying to emulate a hand, and hands have fingers and fingers have joints, so why not group them per finger, per joint. Because I'm going to separate the servo connection on the breadboard between a jumper cable, meaning I won't connect the servo pin directly to the Arduino, but to the breadboard, and then to the Arduino; it will make the overall look more pleasing. So I'll choose an arbitrary coloring pattern, let's say the rainbow, or ROY G. BV. 

This means I'll start each first joint pin with a red jumper cable, second joint orange, and third joint yellow. This will make it easy to distinguish because each group of joints will be distinguished per placement on the Arduino, and the color of the cable will communicate the joint clearly and indistinguishably per finger.

### Next, how should I space out the pins on the breadboard to display a neatness?
>> Because I have a 63x10 pin breadboard, I'll have 14 or 15 pins to account for, which--for the sake of simplicity--we'll choose to account for 15, meaning I can have a spacer pin on both ends, and the middle, meaning I should have a perfect symmetry on the breadboard per pin group (or 60 pins to map 5 groups). This means I should divide 60 by 5, because there are five fingers, and each finger needs at most 3 pins for each servo, meaning 12 pins per group, which fits perfectly.

### What colors go with what finger?
>> So each servo group will have their own color, providing insight into their grouping, and the previously defined coloring convention will provide insight into the specific joint number.

## Servo Jumper Cable Color

<table>
    <tr>
        <th> Thumb </th>
        <th> Index </th>
        <th> Middle </th>
        <th> Ring </th>
        <th> Pinky </th>
    </tr>
    <tr>
        <td> Tangerine </td>
        <td> Indigo </td>
        <td> Mint </td>
        <td> Russet </td>
        <td> Plum </td>
    </tr>
</table>

<img src="../img/firstJointAttached.jpg" />

<img src="../img/servoBraids.jpg" />

### What are the specific pins per group?
>> Because we're using the first, middle, and last pin as spacers for symmetry, we will use the pins as followed:

<ol>
    <li> 1: Spacer </li>
    <li> 2 - 13: Pinky </li>
    <li> 14 - 25: Ring </li>
    <li> 26 - 31, 33 - 38: Middle </li>
    <li> 32: Spacer </li>
    <li> 39 - 50: Index </li>
    <li> 51 - 62: Thumb </li>
    <li> 63: Spacer </li>
</ol>

## Update 3.1

I'm gonna figure out how to attach the thumb later. I am still not sure whether I want to do two servos for the thumb or just one. For now I'm leaning towards one but we'll see.

