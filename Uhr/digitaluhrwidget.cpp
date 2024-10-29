#include"digitaluhrwidget.hpp"
digitaluhrwidget::Digitaluhrwidget::Digitaluhrwidget(int i,QWidget *parent):QWidget(parent),f(new QFont())
		,t(new QTimer(this)),i(i){
	f->setStyleHint(QFont::Decorative);
	connect(t,&QTimer::timeout,this,QOverload<>::of(&Digitaluhrwidget::update));
	t->start(i);
	setWindowTitle(tr("Uhrzeit"));
	setMinimumSize(QSize(200,150));
}
digitaluhrwidget::Digitaluhrwidget::~Digitaluhrwidget(){
	delete f;
	delete t;
}
void digitaluhrwidget::Digitaluhrwidget::paintEvent(QPaintEvent*event){
	QPainter p(this);
	p.setFont(*f);
	time_t z;
	time(&z);
	
	p.drawText(20,height()/2,ctime(&z));
}
void digitaluhrwidget::Digitaluhrwidget::timer(bool ob=true){
	if(ob)
		t->start();
	else
		t->stop();
}
