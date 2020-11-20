#include "../headers/win.hpp"
#include "../headers/conf.hpp"

Win::Win(Glib::ustring title) {
    set_title(title);
    set_resizable(false);
    set_default_size(WIDTH, HEIGHT);
}
