#include <iostream>
#include <vector>
#include <math.h>


/*// 包含着色器加载库
#include "shader.h"
#include "ogldev_util.h"
#include "ogldev_pipeline.h"

//顶点缓冲对象
GLuint VBO1;

// 索引缓冲对象的句柄
GLuint IBO;

// 平移变换一致变量的句柄引用
GLuint gWorldLocation;


const char* pVSFileName = "shader.vertex";
const char* pFSFileName = "shader.frag";


static void RenderSceneCB()
{
	glClear(GL_COLOR_BUFFER_BIT);

	// 维护一个不断慢慢增大的静态浮点数
	static float Scale = 0.0f;
	Scale += 0.001f;

	// 实例化一个pipeline管线类对象，初始化配置好之后传递给shader
	Pipeline p;
	p.Scale(sinf(Scale * 0.1f), sinf(Scale * 0.1f), sinf(Scale * 0.1f));
	p.WorldPos(0.0f, sinf(Scale), 0.0f);
	p.Rotate(sinf(Scale) * 40.0f, 0, sinf(Scale) * 40.0f);
	glUniformMatrix4fv(gWorldLocation, 1, GL_TRUE, (const GLfloat*)p.GetWorldTrans());


	// 如何绘制数据-位置
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE,
		6 * sizeof(GL_FLOAT), (GLvoid*)0);
	glEnableVertexAttribArray(0);
	// 如何绘制数据-颜色
	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE,
		6 * sizeof(GL_FLOAT), (GLvoid*)(3 * sizeof(GL_FLOAT)));
	glEnableVertexAttribArray(1);


	// 每次在绘制之前绑定索引缓冲
	//glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, IBO);
	// 索引绘制图形
	glDrawElements(GL_TRIANGLES, 12, GL_UNSIGNED_INT, 0);

	//glDrawArrays(GL_TRIANGLES, 0, 3);

	glDisableVertexAttribArray(0);
	glDisableVertexAttribArray(1);

	glutSwapBuffers();
}


static void InitializeGlutCallbacks()
{
	glutDisplayFunc(RenderSceneCB);

	// 将渲染回调注册为全局闲置回调
	glutIdleFunc(RenderSceneCB);
}

static void CreateVertexBuffer()
{
	// 金字塔的四个顶点
	GLfloat Vertices[] = {
		-1.0f, -1.0f, 0.0f, 1.0f, 0.0f, 0.0f,
		0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f,
		1.0f, -1.0f, 0.0f, 0.0f, 0.0f, 1.0f,
		1.0f, 1.0f, 0.0f ,1.0f, 0.0f, 0.0f };	

	glGenBuffers(1, &VBO1);
	glBindBuffer(GL_ARRAY_BUFFER, VBO1);
	glBufferData(GL_ARRAY_BUFFER, sizeof(Vertices), Vertices, GL_STATIC_DRAW);
}

// 创建索引缓冲器
static void CreateIndexBuffer()
{
	// 四个三角形面的顶点索引集
	unsigned int Indices[] = {
		0, 3, 1,
		1, 3, 2,
		2, 3, 0,
		0, 1, 2 };

	// 创建缓冲区
	glGenBuffers(1, &IBO);
	// 绑定缓冲区
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, IBO);
	// 添加缓冲区数据
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(Indices), Indices, GL_STATIC_DRAW);
}


int main(int argc, char** argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(500, 400);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Tutorial 04");

	InitializeGlutCallbacks();

	// 必须在glut初始化后！
	GLenum res = glewInit();
	if (res != GLEW_OK) {
		fprintf(stderr, "Error: '%s'\n", glewGetErrorString(res));
		return 1;
	}

	printf("GL version: %s\n", glGetString(GL_VERSION));

	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

	CreateVertexBuffer();
	CreateIndexBuffer();


	//准备着色器程序
	Shader shader(pVSFileName, pFSFileName);
	shader.use();
	shader.getPos(gWorldLocation, "gWorld");

	glutMainLoop();

	return 0;
}*/
