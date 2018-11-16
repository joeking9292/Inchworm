# Controls:

n - move forward <br />
b - reverse back <br />
r - rotate <br />
q - quit <br />

# Inchworm:

You are provided with a class, Terminal, with which you can treat the shell window as a pixel screen to paint. It also lets you set text on it. See the provided Terminal class for details. The Terminal can be painted by filling out a pixel matrix, implemented in the provided class, PixelMatrix, which is a 2d array of RGB objects. The RGB class is also provided. Take a look at the PixelMatrix and RGB classes--they would be within your abilities, but I've provided them to lessen the amount of work needed to get this project running.

The other files provided (besides testing) are adt/Critter.h and the header file for its first implementation, InchWorm. Critter is the ADT which describes the interface that the InchWorm class implements. Critters follow a common pattern in visual applications, called Model-View-Controller. In this pattern, we break down the tasks of the user interaction as:

Model: the data representing the object <br />
View: the rendering of the model onto the display <br />
Controller: methods for manipulating the data model, typically connected via the view to some user-controlled object on the display <br />

In our case, the model for the InchWorm is stored in the private data members: state, heading, r, and c. We will use an enumerated type for state and heading (bunched/straight, and east/south/west/north, respectively) and (r,c) is the location of the head of the worm. The view is a PixelMatrix and is painted when we call the render method. The controllers are the move, reverse, and rotate methods.

The constructor just sets the head of the worm to be at the given coordinates. The move just moves the head forward by two pixels in the current direction and heading. The rotate method changes the heading.

All the real work is done in the render method. You need to call the given pixel matrix's paint method for each of the seven pixels of the worm's body. Don't worry about the size of the provided pixel map since you can freely write past its edges and it just ignores you.

This assignment was assigned by Professor Kevin Lundeen at Seattle University.
