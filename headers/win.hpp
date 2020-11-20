#pragma once

#include <gtkmm.h>

class Win : public Gtk::Window {
    public:
        Win(Glib::ustring);
    protected:
    private:
        void setup();
};
