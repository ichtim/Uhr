#ifndef uhr_digitaluhrwidget
#define uhr_digitaluhrwidget
#include<time.h>
#include<QWidget>
#include<QTimer>
#include<QtGlobal>
#include<QtGui>
#include<QPainter>
#include<QFont>
namespace digitaluhrwidget{
	class Digitaluhrwidget:public QWidget{
		Q_OBJECT
		public:
			Digitaluhrwidget(int i,QWidget *parent = nullptr);
			~Digitaluhrwidget();
			void timer(bool ob);
		protected:
			void paintEvent(QPaintEvent*event)override;
		private:
			QFont*f;
			QTimer*t;
			int i;
	};
}
#endif
