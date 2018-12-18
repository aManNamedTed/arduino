# 12-18-18

Hi there. I was busy yesterday but now I am going to measure the range of motion of each joint.

As was mentioned a few days ago, it makes sense that the 0th degree of the joint should be the extended finger joints (when you stretch each finger as far back as possible), so that I can set resting/flexed joint ranges to be within the 180 degree limit my servos permit. 

This means that the physical design of the hand will have to consider the range of motion rather than the servo itself (this just means that each servo will have to be rotated toward the back of the hand to account for the extended finger joint). 

### Update 1.0

Upon further consideration, it doesn't make sense that I should let 0 degrees be the extended range of motion because what if in the future it needs to extend beyond that? Designing it into the hand is a <i>bad</i> idea. So what I should do instead is set resting hand degree measures to be > 30 or so.

See, the idea is that I could offset the resting degree measure to be towards the zero bound of range of motion of the servo(let's say I set resting = 30 deg), and that way there's more flexibility(about 150 degrees) in the flexed range of motion of the first joint, which is more realistic in terms of actual range of motion of the finger joint. HOWEVER, this is a cyborg hand and it should have more abilities than the actual (primitive? haha) hand. So what if I put the resting hand degree to be 90 degrees, which allows for 90 degrees of range in <b>both</b> directions?? That would be so sick. The only issue I see currently with that I would have to make each joint even on both sides. So there would be no extra stability from the structure of the finger (cardboard that supports the servo motion). Think of pangolin scales; the way they allow motion encourages/supports range of motion in one direction (the flexed direction).

Because I think it would be more interesting to have range of motion in both directions, I'll build the finger joints to be even on both sides to allow 90 degrees of motion both in the flexed and extended directions.

<b>Final Determination</b>: A high-five hand shape will be designated at 90 degrees.

### Update 1.1

Because the second and third joints are connected to the first, the second and third joints will remain at their 90 degree baseline.

### Update 1.2

Okay I messed up. The second joint has more than a 90 degree range of motion, which means baseline for second joints will have to be a little less than 90 degrees. Currently second joint range of motion is measuring about 115 degrees for a flexed position. Well... I guess my hope for equal range of motion for flexed and extended hand movement is nixed this time. Maybe if I had 360 degree range of motion servos, I could do some funky-cool things but that'll have to be next time.

## Range of Motion of Finger Joints
<table>
  <tr>
    <th> Measurement </th>
    <th> Thumb </th>
    <th> Index </th>
    <th> Middle </th>
    <th> Ring </th>
    <th> Pinky </th>
  </tr>
  <tr>
    <th> Baseline Vertical(high-five) Finger Joint Setting (degrees) </th>
    <td> 90 </td>
    <td> 90 </td>
    <td> 90 </td>
    <td> 90 </td>
    <td> 90 </td>
  </tr>
  <tr>
    <th> First Joint Extended (degrees) </th>
    <td> 65-67 </td>
    <td> 73-75 </td>
    <td> 73-75 </td>
    <td> 73-75 </td>
    <td> 73-75 </td>
  </tr>
  <tr>
    <th> Second Joint Extended (degrees) </th>
    <td> 90 </td>
    <td> 90 </td>
    <td> 90 </td>
    <td> 90 </td>
    <td> 90 </td>
  </tr>
  <tr>
    <th> Third Joint Extended (degrees) </th>
    <td> N/A </td>
    <td> 90 </td>
    <td> 90 </td>
    <td> 90 </td>
    <td> 90 </td>
  </tr>
  <tr>
    <th> First Joint Resting (degrees) </th>
    <td> 135-145 </td>
    <td> 73-75 </td>
    <td> 73-75 </td>
    <td> 73-75 </td>
    <td> 73-75 </td>
  </tr>
  <tr>
    <th> Second Joint Resting (degrees) </th>
    <td> 120 </td>
    <td> 120 </td>
    <td> 120 </td>
    <td> 120 </td>
    <td> 120 </td>
  </tr>
  <tr>
    <th> Third Joint Resting (degrees) </th>
    <td> N/A </td>
    <td> 100 </td>
    <td> 100 </td>
    <td> 100 </td>
    <td> 100 </td>
  </tr>
</table>

### Update 1.3

Okay now that I have those measurements, I'll go back to thinking about how far to scale out this hand. I think 2x would be good. I just need to make sure the spacing between the servos is sufficient to allow for flexing into a fist.

I'm also a little conflicted because I feel like I should make a finger/a couple of fingers and make sure they play nice before I put them on a palm-like structure. I mean I'm certain that I can develop something that will play nice, I just wanna get into the fun part of this project which is seeing the desired result.

BUT, I guess I'll stick to just doing the palm first and the fingers later. Off to cut some cardboard!