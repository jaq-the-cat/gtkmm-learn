#include "../headers/win.hpp"
#include "../headers/conf.hpp"

void Win::setup() {
    add(btn1);
    add(btn2);
    show_all_children();
}

Win::Win(Glib::ustring title) :
btn1(Gtk::Button("Hello")),
btn2(Gtk::Button("Goodbye")) {
    set_title(title);
    set_resizable(false);
    set_default_size(WIDTH, HEIGHT);
    setup();
}
