#include"hauptfenster.hpp"
#include<iostream>
hauptfenster::Hauptfenster::Hauptfenster(QWidget *parent):QMainWindow(parent),
		g(new QPushButton(tr("gehen"))),
		u(new digitaluhrwidget::Digitaluhrwidget(10)),a(new QPushButton(tr("aktualisieren"))),
		c(new QCheckBox(this)),l(new QVBoxLayout()),
		b(new QGroupBox(tr(""))){
	connect(g,SIGNAL(clicked()),this,SLOT(anwendungverlassen()));
	connect(a,SIGNAL(clicked()),this,SLOT(aktualisieren()));
	connect(c,SIGNAL(clicked(bool)),this,SLOT(automatischaktualisieren(bool)));
	l->addWidget(a);
	l->addWidget(u);
	l->addWidget(c);
	l->addWidget(g);
	b->setLayout(l);
	setCentralWidget(b);
	setWindowTitle(tr(u8"Uhr\tHauptmenü"));
}
hauptfenster::Hauptfenster::~Hauptfenster(){
	delete g;
	delete u;
	delete a;
	delete c;
	delete l;
	delete b;
}
void hauptfenster::Hauptfenster::anwendungverlassen(){
	QMessageBox m;
	m.setWindowTitle(tr("Anwendung verlassen"));
	m.setText(tr("Anwendung verlassen?"));
	m.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
	m.setDefaultButton(QMessageBox::No);
	m.setIcon(QMessageBox::Question);
	switch(m.exec()){
		case QMessageBox::Yes:
			qApp->quit();
	}
}
void hauptfenster::Hauptfenster::aktualisieren(){
	setWindowTitle(tr(u8"anders"));
}
void hauptfenster::Hauptfenster::automationsaktualisieren(bool ob){
	setWindowTitle(tr(u8"anders"));
	u->timer(ob);
}
