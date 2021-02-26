/*
** LAROUS PROJECT, 2020
** CSFML_Good_Practice
** FiIe description:
** core
*/

#include <SFML/Window/VideoMode.h>
#include <SFML/Graphics/RenderWindow.h>

int core(int argc, char const *argv[])
{
    sfEvent event;
    sfVideoMode mode = {1280, 720, 32};
    sfRenderWindow *rwin = sfRenderWindow_create(mode, "Name", sfDefaultStyle, NULL);

    sfRenderWindow_setFramerateLimit(rwin, 60);
    sfRenderWindow_setVerticalSyncEnabled(rwin, sfTrue);
    while (rwin != NULL && sfRenderWindow_isOpen(rwin)) {
        sfRenderWindow_clear(rwin, sfBlack);
        while (sfRenderWindow_pollEvent(rwin, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(rwin);
        }
        sfRenderWindow_display(rwin);
    }
    sfRenderWindow_destroy(rwin);
    return (0);
}
