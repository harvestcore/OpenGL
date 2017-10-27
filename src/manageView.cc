//####################################################
//
//  Ángel Gómez Martín
//  agomezm@correo.ugr.es
//  3º A - Informática Gráfica 2017-18
//  GII - ETSIIT
//
//  file: manageView.cc
//
//####################################################

#include "manageView.h"

vector<ViewMode> changeMode(vector<ViewMode> oldMode, ViewMode newMode, int  i) {
    if (oldMode[i] == NULL_)
        oldMode[i] = newMode;
    else if (oldMode[i] == newMode)
        oldMode[i] = NULL_;

    if (newMode == SOLID)
        oldMode[3] = NULL_;

    if (newMode == CHESS)
        oldMode[2] = NULL_;

    return oldMode;
}

TypeObject changeObject(TypeObject oldObject, TypeObject newObject) {
    if (oldObject == _NULL)
        oldObject = newObject;
    else if (oldObject == newObject)
        oldObject = _NULL;
    else if (oldObject != newObject)
        oldObject = newObject;

    return oldObject;
}

void drawModels(Models mods, TypeObject object, vector<ViewMode> mode) {
    switch (object) {
        case CUBE:
            if (mode[0] == MESH)
                mods.v_Cube.drawMesh();
            if (mode[1] == EDGES)
                mods.v_Cube.drawEdges();
            if (mode[2] == SOLID)
                mods.v_Cube.drawSolid();
            if (mode[3] == CHESS)
                mods.v_Cube.drawChess();
            break;

        case TETRAHEDRON:
            if (mode[0] == MESH)
                mods.v_Tetrahedron.drawMesh();
            if (mode[1] == EDGES)
                mods.v_Tetrahedron.drawEdges();
            if (mode[2] == SOLID)
                mods.v_Tetrahedron.drawSolid();
            if (mode[3] == CHESS)
                mods.v_Tetrahedron.drawChess();
            break;

        case PLY_STATIC:
            if (mode[0] == MESH)
                mods.v_Ply_Static.drawMesh();
            if (mode[1] == EDGES)
                mods.v_Ply_Static.drawEdges();
            if (mode[2] == SOLID)
                mods.v_Ply_Static.drawSolid();
            if (mode[3] == CHESS)
                mods.v_Ply_Static.drawChess();
            break;

        case PLY_REVOLUTION:
            if (mode[0] == MESH)
                mods.v_Ply_Revolution.drawMesh();
            if (mode[1] == EDGES)
                mods.v_Ply_Revolution.drawEdges();
            if (mode[2] == SOLID)
                mods.v_Ply_Revolution.drawSolid();
            if (mode[3] == CHESS)
                mods.v_Ply_Revolution.drawChess();
            break;

        case CYLINDER:
            if (mode[0] == MESH)
                mods.v_Cylinder.drawMesh();
            if (mode[1] == EDGES)
                mods.v_Cylinder.drawEdges();
            if (mode[2] == SOLID)
                mods.v_Cylinder.drawSolid();
            if (mode[3] == CHESS)
                mods.v_Cylinder.drawChess();
            break;

        case GLASS:
            if (mode[0] == MESH)
                mods.v_Glass.drawMesh();
            if (mode[1] == EDGES)
                mods.v_Glass.drawEdges();
            if (mode[2] == SOLID)
                mods.v_Glass.drawSolid();
            if (mode[3] == CHESS)
                mods.v_Glass.drawChess();
            break;

        case GLASS_INVERTED:
            if (mode[0] == MESH)
                mods.v_Glass_Inverted.drawMesh();
            if (mode[1] == EDGES)
                mods.v_Glass_Inverted.drawEdges();
            if (mode[2] == SOLID)
                mods.v_Glass_Inverted.drawSolid();
            if (mode[3] == CHESS)
                mods.v_Glass_Inverted.drawChess();
            break;

        case CONE:
            if (mode[0] == MESH)
                mods.v_Cone.drawMesh();
            if (mode[1] == EDGES)
                mods.v_Cone.drawEdges();
            if (mode[2] == SOLID)
                mods.v_Cone.drawSolid();
            if (mode[3] == CHESS)
                mods.v_Cone.drawChess();
            break;

        case TUBE:
            if (mode[0] == MESH)
                mods.v_Tube.drawMesh();
            if (mode[1] == EDGES)
                mods.v_Tube.drawEdges();
            if (mode[2] == SOLID)
                mods.v_Tube.drawSolid();
            if (mode[3] == CHESS)
                mods.v_Tube.drawChess();
            break;

        case TEST:
            if (mode[0] == MESH)
                mods.test.drawMesh();
            if (mode[1] == EDGES)
                mods.test.drawEdges();
            if (mode[2] == SOLID)
                mods.test.drawSolid();
            if (mode[3] == CHESS)
                mods.test.drawChess();
            break;
    }
}

void move(Models mods) {
    _vertex3f aux;
    aux.x = 1;
    aux.y = 0;
    aux.z = 0;
    mods.test.move(2,0,0);
}
