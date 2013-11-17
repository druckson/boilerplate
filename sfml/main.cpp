#include <iostream>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <GL/glew.h>
#include <GL/gl.h>

int main() {
    sf::Window wnd(sf::VideoMode(800, 600, 32), "Test");

    // Set color and depth clear value
    glClearDepth(1.f);
    glClearColor(0.f, 0.f, 0.f, 0.f);

    // Enable Z-buffer read and write
    glEnable(GL_DEPTH_TEST);
    glDepthMask(GL_TRUE);
    
    // Setup a perspective projection
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(90.f, 1.f, 1.f, 500.f);

    while (wnd.isOpen()) {

    }

    return 0;
}
