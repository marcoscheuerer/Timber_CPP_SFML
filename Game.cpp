#include <SFML/Graphics.hpp>

using namespace sf;

int main() 
{
    // Create game window with size of 1920 x 1024 in fullscreen mode
    VideoMode vm(1920, 1024);
    RenderWindow window(vm, "Timber", Style::Fullscreen);

    // Game Loop
    while (window.isOpen())
    {
        /*********************************************************************/
        /* Handle the players input                                          */
        /*********************************************************************/
        if (Keyboard::isKeyPressed(Keyboard::Escape))
        {
            window.close();
        }

        /*********************************************************************/
        /* Update the scene                                                  */
        /*********************************************************************/

        /*********************************************************************/
        /* Draw the scene                                                    */
        /*********************************************************************/

        // Clear everything from the last frame
        window.clear();

        // Draw our game scene

        // Show everything we just drew
        window.display();
    }

    return(0);
}