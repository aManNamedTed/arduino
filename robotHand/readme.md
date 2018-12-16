# Robot Hand - 12-15-18 - current

Hello visitor!

This is my very own robot hand using Arduino and some good old fashioned cardboard and servos! The readme specifically will document my thoughts and how I'm going about making this thing. So here we go!

## 12-16-18

So yesterday I did this for about an hour or so and took initial measurements of my right hand to see how this will scale. 

<img src="dayOneHandMeasurements.jpg"/>

I figure that because my servos are all 30mm, I would have to scale the product up by maybe 1.5x because the servo width is more than the actual width between my index finger's palm-first-knuckle joint to my middle finger's palm-first-knuckle joint. So if I need >= 1mm. of clearance between each joint, AND the smallest width between first joints is 20mm., then it makes sense to scale the entire thing by 1.55x to allow full range of motion of the servo that is my middle finger's first joint. So I will make a stationary palm that acts as a stand for the finger servo modules. 

I figure I can create a finger class that can inherit as many joints as possible that are needed. But for now I haven't really thought about that yet. It's just a gut design choice so far. So for now, I'm going to start on the palm stand right now.

### Update 1.1: 

I think I underestimated that measurement of how much clearance I needed because I didn't take into account the amount of material I'll use to simulate the actual finger so I might need 3mm. or more to get clearance. 

### Update 1.2: 

I actually totally muffed the measurements because I wasn't using a consistent reference point <i>per joint</i>. So now I'll just redo the measurements and put'm in a table.

<table>
  <tr>
    <th> Measurement </th>
    <th> Thumb </th>
    <th> Index Finger </th>
    <th> Middle Finger </th>
    <th> Ring Finger </th>
    <th> Pinky Finger </th>
  </tr>
  <tr>
    <td> First Joint to Bottom of Palm Height [y axis] (mm) </td>
    <td> N/A </td>
    <td> 96.5 </td>
    <td> 101 </td>
    <td> 95 </td>
    <td> 80 </td>    
  </tr>
  <tr>
    <td> First Joint to Side of Palm Width [x axis] (mm) </td>
    <td> 83 </td>
    <td> N/A </td>
    <td> N/A </td>
    <td> N/A </td>
    <td> N/A </td>    
  </tr>
  <tr>
    <td> Degrees of Freedom (df) </td>
    <td> 2 </td>
    <td> 3 </td>
    <td> 3 </td>
    <td> 3 </td>
    <td> 3 </td>    
  </tr>
  <tr>
    <td> First Joint Height (mm) </td>
    <td> 40 </td>
    <td> 26 </td>
    <td> 30 </td>
    <td> 26 </td>
    <td> 19 </td>    
  </tr>
  <tr>
    <td> Second Joint Height (mm) </td>
    <td> 30 </td>
    <td> 19.5 </td>
    <td> 22 </td>
    <td> 20.5 </td>
    <td> 14 </td>    
  </tr>
  <tr>
    <td> Third Joint Height (mm) </td>
    <td> N/A </td>
    <td> 27 </td>
    <td> 28 </td>
    <td> 27 </td>
    <td> 24 </td>    
  </tr>
</table>

<table>
  <tr>
    <th>  </th>
  </tr> 
</table>
