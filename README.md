# This is Boxer
a fork from the Prusa iteration 3
Published under GPL v3

The design goals are tried to be easy to make yet satble as possible.  The major style is inheritanted from box frame of Prusa i3.  Additional close-loop control and monitoring will be added later.  This is also serve as the prototype of recyclePhenox, a smaller one made of mostly recycled material.   

All models are in the box_frame folder, including models for aluminium single plate. For some common configs we prepared models, see box_frame/sample_stls.

The controoler will have two versions:
Arduino ATmega + [RAMPS] (http://www.reprap.org/wiki/RAMPS_1.4) or TI EZ430 + TI's [Boosterpack for 3D Printer Control] (http://www.ti.com/tool/TIDM-PRINTERPACK)
This fork will focus on Arduino ATmega + RAMPS, will fork another one once we know how to make TI EZ430 + TI's stepper driver board work   

If you are looking for models that josefprusa uses in workshops, you need to go to [here] (https://github.com/josefprusa/Prusa3-vanilla)
