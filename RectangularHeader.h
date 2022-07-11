#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H

class RectangularCube { //Defined the class Rectangular Cube
    private: //Access specifier - Declare two sides as private data field
        string color; //Private data field color that is string type
        double width;
        double height;

    public:
        double length; //Declare one side as a public data field

        RectangularCube() { //No-arguments contructor with all three sides and color set to different values
            color = "black";
            width = 5.145;
            height = 4.894;
            length = 10.123;
        }

        //Contructor with parameteres
        RectangularCube(string newColor, double newWidth, double newHeight, double newLength) {
            color = newColor;
            width = newWidth;
            height = newHeight;
            length = newLength;
        }

        // Return Volume of this Rectangular Cube
        double getVolume() {
            return length * width * height;
        };

        //Return Surface Area of this Rectangular Cube
        double getSurfaceArea() {
            return (2 * (length * width)) + (2 * (length * height)) + (2 * (width * height));
        };
    
        //get and set functions for the two private sides and color data field
        string getColor();
        double getWidth();
        double getHeight();
        void setColor();
        void setWidth();
        void setHeight();

};


#endif // !
