#include<QtGui>
#include"hauptfenster.hpp"
int main(int argc,char*argv[]){
	QApplication app(argc,argv);
	hauptfenster::Hauptfenster h=hauptfenster::Hauptfenster();
	h.show();
	return app.exec();
}
