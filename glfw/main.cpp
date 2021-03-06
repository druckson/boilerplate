#include <GLFW/glfw3.h>

int main() {
    GLFWwindow* window;

    if (!glfwInit())
        return -1;

    window = glfwCreateWindow(800, 600, "Hello World", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }
  
    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window))
    {
        /* Render here */

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
