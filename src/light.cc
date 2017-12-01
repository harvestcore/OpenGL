//####################################################
//
//  Ángel Gómez Martín
//  agomezm@correo.ugr.es
//  3º A - Informática Gráfica 2017-18
//  GII - ETSIIT
//
//  file: light.cc
//
//####################################################

#include "light.h"

Light::Light() {
}

void Light::setID(GLenum ID) {
    this->ID = ID;
}

void Light::setPosition(_vertex4f position) {
    this->position = position;
}

void Light::setAmbient(_vertex4f ambient) {
    this->ambient = ambient;
}

void Light::setSpecular(_vertex4f specular) {
    this->specular = specular;
}

void Light::setDiffuse(_vertex4f diffuse) {
    this->diffuse = diffuse;
}

void Light::setDirection(GLfloat alfa, GLfloat beta) {
    this->alfa = alfa;
    this->beta = beta;
}

void Light::setDirectional(bool dir) {
    if(dir) {
        directional = true;
        position[3] = 0;
    } else {
        directional = false;
        position[3] = 1;
    }
}

void Light::enable() {
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    if(directional) {
        glRotatef(alfa,0,1,0);
        glRotatef(beta,1,0,0);
    }

    glLightfv(ID, GL_POSITION, (GLfloat *) &position);
    glLightfv(ID, GL_AMBIENT, (GLfloat *) &ambient);
    glLightfv(ID, GL_SPECULAR, (GLfloat *) &specular);
    glLightfv(ID, GL_DIFFUSE, (GLfloat *) &diffuse);


    glEnable(GL_LIGHTING);
    glEnable(ID);
    glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, GL_TRUE);
    glPopMatrix();
}

void Light::disable() {
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glDisable(GL_LIGHTING);
    glDisable(ID);
    glPopMatrix();
}