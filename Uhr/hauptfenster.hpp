#ifndef uhr_hauptfenster
#define uhr_hauptfenster
#include<string>
#include<QtGui>
#include<QApplication>
#include<QVBoxLayout>
#include<QMainWindow>
#include<QPushButton>
#include<QMessageBox>
#include<QMdiArea>
#include<QTextEdit>
#include<QGroupBox>
#include<QCheckBox>
#include"digitaluhrwidget.hpp"
namespace hauptfenster{
	class Hauptfenster:public QMainWindow{
		Q_OBJECT
		public:
			Hauptfenster(QWidget *parent = nullptr);
			~Hauptfenster();
		private slots:
			void anwendungverlassen();
			void aktualisieren();
			void automationsaktualisieren(bool ob);
		private:
			QPushButton*g;
			digitaluhrwidget::Digitaluhrwidget*u;
			QPushButton*a;
			QCheckBox*c;
			QVBoxLayout*l;
			QGroupBox*b;
			
	};
}
#endif
