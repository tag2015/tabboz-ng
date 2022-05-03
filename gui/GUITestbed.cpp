// generated by Fast Light User Interface Designer (fluid) version 1.0308

#include "GUITestbed.h"
#include <FL/fl_ask.H>
#include "GUITabboz.h"
#include "../zarrosim.h"
#include "../global.h"
#include "../eventi.h"
#include "../sound.h"
#include "../sharedimg.h"
#include <FL/Fl_Shared_Image.H>
#include <FL/Fl_PNG_Image.H>
static int num_file; 
static int num_evento; 

Fl_Double_Window *win_testbed=(Fl_Double_Window *)0;

static void cb_win_testbed(Fl_Double_Window*, void*) {
  win_principale->activate();
win_testbed->hide();
}

Fl_Box *box_1=(Fl_Box *)0;

static void cb_caricapics(Fl_Button*, void*) {
  //Fl_PNG_Image("provatesta",testa_0,413);
//Fl_PNG_Image("provagiacca",giubbotto_0,sizeof(giubbotto_0));
//Fl_PNG_Image("metallaro",metallaro,18984);

//Fl_Shared_Image *sh_img = Fl_Shared_Image::get("res/pic/giubbotto_0.png");

but_1->image(ImgGiubbotto[1]);
but_2->image(ImgGiubbotto[2]);
but_3->image(ImgScarpe[0]);
//but_1->image(sh_img);

win_testbed->redraw();
}

Fl_Button *but_1=(Fl_Button *)0;

Fl_Button *but_2=(Fl_Button *)0;

Fl_Button *but_3=(Fl_Button *)0;

static void cb_nro(Fl_Value_Input* o, void*) {
  num_file=o->value();
}

static void cb_Play(Fl_Button*, void*) {
  TabbozPlaySound(num_file);
}

static void cb_Evento(Fl_Value_Input* o, void*) {
  num_evento=o->value();
}

static void cb_RunH(Fl_Button*, void*) {
  FinestraEvento(num_evento,num_evento,"",FALSE);
}

static void cb_RunV(Fl_Button*, void*) {
  FinestraEvento(num_evento,num_evento,"",TRUE);
}

static void cb_Tema(Fl_Button*, void*) {
  Fl::scheme("base");
win_testbed->redraw();
}

static void cb_Tema1(Fl_Button*, void*) {
  Fl::scheme("plastic");
win_testbed->redraw();
}

static void cb_Tema2(Fl_Button*, void*) {
  Fl::scheme("gtk+");
win_testbed->redraw();
}

static void cb_Tema3(Fl_Button*, void*) {
  Fl::scheme("gleam");
win_testbed->redraw();
}

static void cb_info(Fl_Button*, void*) {
  Fl_Box *message_icon = (Fl_Box *)fl_message_icon();

message_icon->copy_label("");
message_icon->box(FL_NO_BOX);
message_icon->align(FL_ALIGN_IMAGE_BACKDROP);
fl_message("messaggio informativo");
message_icon->image(ImgInfo);
}

static void cb_warn(Fl_Button*, void*) {
  Fl_Box *message_icon = (Fl_Box *)fl_message_icon();

message_icon->copy_label("");
message_icon->box(FL_NO_BOX);
message_icon->align(FL_ALIGN_IMAGE_BACKDROP);
message_icon->image(ImgAvviso);
fl_alert("Sei quasi fottuto");
}

static void cb_alert(Fl_Button*, void*) {
  Fl_Box *message_icon = (Fl_Box *)fl_message_icon();

message_icon->copy_label("");
message_icon->box(FL_NO_BOX);
message_icon->align(FL_ALIGN_IMAGE_BACKDROP);
message_icon->image(ImgStop);
fl_alert("Sei fottuto!");
}

static void cb_question(Fl_Button*, void*) {
  Fl_Box *message_icon = (Fl_Box *)fl_message_icon();

message_icon->copy_label("");
message_icon->box(FL_NO_BOX);
message_icon->align(FL_ALIGN_IMAGE_BACKDROP);
message_icon->image(ImgDomanda);
fl_choice("domanda","si","no","forse");
}

static void cb_cool(Fl_Button*, void*) {
  Fl_Box *message_icon = (Fl_Box *)fl_message_icon();

message_icon->copy_label("");
message_icon->box(FL_NO_BOX);
message_icon->align(FL_ALIGN_IMAGE_BACKDROP);
message_icon->image(ImgCool);
fl_alert("Sei un figo!");
}

static void cb_default(Fl_Button*, void*) {
  fl_beep(FL_BEEP_DEFAULT);
}

static void cb_message(Fl_Button*, void*) {
  fl_beep(FL_BEEP_MESSAGE);
}

static void cb_error(Fl_Button*, void*) {
  fl_beep(FL_BEEP_ERROR);
}

static void cb_question1(Fl_Button*, void*) {
  fl_beep(FL_BEEP_QUESTION);
}

static void cb_notification(Fl_Button*, void*) {
  fl_beep(FL_BEEP_NOTIFICATION);
}

Fl_Double_Window* GUITestbed() {
  { win_testbed = new Fl_Double_Window(673, 520, "TestBed");
    win_testbed->color(FL_LIGHT3);
    win_testbed->callback((Fl_Callback*)cb_win_testbed);
    win_testbed->hotspot(win_testbed);
    { box_1 = new Fl_Box(10, 150, 450, 305, "box_1");
      box_1->box(FL_ENGRAVED_FRAME);
      box_1->labelsize(16);
      box_1->align(Fl_Align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Box* box_1
    { Fl_Button* o = new Fl_Button(560, 465, 100, 30, "caricapics");
      o->callback((Fl_Callback*)cb_caricapics);
    } // Fl_Button* o
    { Fl_Group* o = new Fl_Group(10, 15, 670, 130);
      { but_1 = new Fl_Button(40, 15, 190, 125);
        but_1->type(102);
        but_1->down_box(FL_DOWN_BOX);
        but_1->color(FL_BACKGROUND2_COLOR);
        but_1->selection_color((Fl_Color)3);
      } // Fl_Button* but_1
      { but_2 = new Fl_Button(240, 15, 190, 125);
        but_2->type(102);
        but_2->down_box(FL_DOWN_BOX);
        but_2->color(FL_BACKGROUND2_COLOR);
      } // Fl_Button* but_2
      { but_3 = new Fl_Button(440, 15, 190, 125);
        but_3->type(102);
        but_3->down_box(FL_DOWN_BOX);
        but_3->color(FL_BACKGROUND2_COLOR);
      } // Fl_Button* but_3
      o->end();
    } // Fl_Group* o
    { Fl_Value_Input* o = new Fl_Value_Input(100, 465, 70, 25, "nro file suono");
      o->callback((Fl_Callback*)cb_nro);
    } // Fl_Value_Input* o
    { Fl_Button* o = new Fl_Button(175, 465, 64, 25, "Play");
      o->callback((Fl_Callback*)cb_Play);
    } // Fl_Button* o
    { Fl_Value_Input* o = new Fl_Value_Input(325, 465, 70, 25, "Evento");
      o->callback((Fl_Callback*)cb_Evento);
    } // Fl_Value_Input* o
    { Fl_Button* o = new Fl_Button(400, 465, 64, 25, "RunH");
      o->callback((Fl_Callback*)cb_RunH);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(465, 465, 64, 25, "RunV");
      o->callback((Fl_Callback*)cb_RunV);
    } // Fl_Button* o
    { Fl_Group* o = new Fl_Group(515, 170, 95, 80, "Tema");
      { Fl_Button* o = new Fl_Button(515, 170, 95, 20, "Tema Win");
        o->callback((Fl_Callback*)cb_Tema);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(515, 210, 95, 20, "Tema Plastic");
        o->callback((Fl_Callback*)cb_Tema1);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(515, 190, 95, 20, "Tema GTK");
        o->callback((Fl_Callback*)cb_Tema2);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(515, 230, 95, 20, "Tema Gleam");
        o->callback((Fl_Callback*)cb_Tema3);
      } // Fl_Button* o
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(470, 300, 75, 100, "Dialogs");
      o->box(FL_EMBOSSED_FRAME);
      { Fl_Button* o = new Fl_Button(470, 300, 75, 20, "info");
        o->callback((Fl_Callback*)cb_info);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(470, 320, 75, 20, "warn");
        o->callback((Fl_Callback*)cb_warn);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(470, 340, 75, 20, "alert");
        o->callback((Fl_Callback*)cb_alert);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(470, 360, 75, 20, "question");
        o->callback((Fl_Callback*)cb_question);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(470, 380, 75, 20, "cool");
        o->callback((Fl_Callback*)cb_cool);
      } // Fl_Button* o
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(570, 300, 85, 100, "Beeps");
      { Fl_Button* o = new Fl_Button(570, 300, 85, 20, "default");
        o->callback((Fl_Callback*)cb_default);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(570, 320, 85, 20, "message");
        o->callback((Fl_Callback*)cb_message);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(570, 340, 85, 20, "error");
        o->callback((Fl_Callback*)cb_error);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(570, 360, 85, 20, "question");
        o->callback((Fl_Callback*)cb_question1);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(570, 380, 85, 20, "notification");
        o->callback((Fl_Callback*)cb_notification);
      } // Fl_Button* o
      o->end();
    } // Fl_Group* o
    num_file=0;
    win_testbed->size_range(673, 520, 673, 520);
    win_testbed->end();
  } // Fl_Double_Window* win_testbed
  return win_testbed;
}
