# ekf

I implement the eskf described in Sola, https://arxiv.org/abs/1812.01537

Section V.
That is constant position kf, with only an odom control input.  It's not
really what I want as I want to do predict / update while that approach
isn't conducive to multiple sensors.  The plan is get the same result
using SE2 then use SE_2_3 or otherwise add the state I think I need for
predict.

I'll implement the desired math once I get resuls similar to the original
paper.
