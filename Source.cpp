#include "Header.h"
#include <glut.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <sstream>
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "ru");
	glutInit(&argc, argv);
	graph = makeGraph();
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(1350, 730);
	glutCreateWindow("Graph");
	WW = glutGet(GLUT_WINDOW_WIDTH);
	WH = glutGet(GLUT_WINDOW_HEIGHT);
	glutDisplayFunc(display);
	glutReshapeFunc(peredelka);
	glutMouseFunc(mouseClick);
	glutMainLoop();
	return 0;
}