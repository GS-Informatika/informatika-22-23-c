struct Point3D {
    int x, y, z;
};

int get_x_pt(struct Point3D * pt) {
    return pt->x;
}

int get_x(struct Point3D pt) {
    return pt.x;
}