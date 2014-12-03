#ifndef UTILS_H
#define UTILS_H

#include <GL/glu.h>
#include <glm/glm.hpp>
#include <vector>
#include "camera3d.h"

namespace utils {

    void drawWireframeCube(glm::vec3 pos, float size);
    void drawCircle(glm::vec3 pos, float r, glm::vec3 axis);
    void drawHalfCircle(glm::vec3 pos, float r,
                        glm::vec3 axis, glm::vec3 plane);
    void getHalfCirclePoints(glm::vec3 pos, float r,
                             glm::vec3 axis, glm::vec3 plane,
                             std::vector<glm::vec3> *points);

    float pointToLineDistance(glm::vec3 p, glm::vec3 o, glm::vec3 dir);
    glm::vec3 closestPointOnLineFromPoint(glm::vec3 p, glm::vec3 o, glm::vec3 dir);
    float lerp(float x1, float x2, float t);
    float easeInOut(float t, float t1, float t2);
    glm::vec3 linePlaneIntersection(glm::vec3 lOrigin, glm::vec3 lDir,
                                    glm::vec3 pOrigin, glm::vec3 pNormal);

}

#endif // UTILS_H