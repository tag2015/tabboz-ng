// generated by Fast Light User Interface Designer (fluid) version 1.0308

#ifndef GUILavoro_h
#define GUILavoro_h
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
extern Fl_Double_Window *win_lavoro;
#include <FL/Fl_Group.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Value_Output.H>
extern Fl_Value_Output *lavoro_val_impegno;
extern Fl_Value_Output *lavoro_val_soldi;
extern Fl_Value_Output *lavoro_val_stipendio;
#include <FL/Fl_Return_Button.H>
extern Fl_Box *lavoro_val_impegno_percent;
#include <FL/Fl_Output.H>
extern Fl_Output *lavoro_txt_ditta;
Fl_Double_Window* GUILavoro();
extern Fl_Double_Window *win_cercalavoro;
extern Fl_Button *lav_btn_ok;
extern Fl_Button *lav_btn_back;
extern Fl_Box *lav_img_ditta;
extern Fl_Box *lav_txt_ditta;
Fl_Double_Window* GUICercaLavoro();
extern Fl_Double_Window *win_quizzone;
#include <FL/Fl_Check_Button.H>
Fl_Double_Window* GUIQuizzone();
#endif
