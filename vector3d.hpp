#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <ostream>

class vector3d {
public:
    const static vector3d X;
    const static vector3d Y;
    const static vector3d Z;
    const static vector3d ZERO;
    int x;
    int y;
    int z;
    vector3d(int x, int y, int z);
    vector3d operator + (vector3d a) {
        return vector3d(x+a.x,y+a.y,z+a.z);
    }
    vector3d operator - (vector3d a) {
        return vector3d(x-a.x,y-a.y,z-a.z);
    }
    // TODO: дописать

};

// TODO: дописать

#endif
