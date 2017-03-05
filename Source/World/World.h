#ifndef WORLD_H_INCLUDED
#define WORLD_H_INCLUDED

#include "Chunk/CMap.h"

class Player;
class Camera;

namespace Renderer
{
    class Master;
}

class World
{
    public:
        World(const Camera& camera, Player& player);

        void input  (Camera& camera);
        void update (float dt);
        void draw   (Renderer::Master& renderer);

    private:
        Chunk::Map m_chunkMap;

        Player* m_p_player;
};

#endif // WORLD_H_INCLUDED
