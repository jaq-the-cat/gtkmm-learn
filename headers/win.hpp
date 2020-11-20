#pragma once

#include <gtkmm.h>

class Win : public Gtk::Window {
    public:
        Win(Glib::ustring);
    protected:
        Gtk::Button btn1;
        Gtk::Button btn2;
    private:
        void setup();
};
