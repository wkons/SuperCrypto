//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MTrand.hpp"

MTRand *rnd;

Graphics::TBitmap *bmp;

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
  // Инициализация генератора случайных чисел и графики

  rnd = new MTRand();

  bmp = new Graphics::TBitmap();

  bmp->Width=100;//SZ_X;

  bmp->Height=100;//SZ_Y;

  bmp->PixelFormat = pf24bit;

  DoubleBuffered=1;

  // Инициализация буфера сети

//  buf=(char*)malloc(100*100);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormDestroy(TObject *Sender)
{
  delete bmp, rnd;

//  free(buf);
}
//---------------------------------------------------------------------------
