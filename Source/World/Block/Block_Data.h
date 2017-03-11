#ifndef BLOCK_DATA_H_INCLUDED
#define BLOCK_DATA_H_INCLUDED

#include <string>
#include "Block_ID.h"
#include "../../Glm_Common.h"

namespace Block
{
    enum Mesh_Type
    {
        Solid,
        Liquid
    };

    struct Data_Holder
    {
        ID blockID;

        std::string name;

        bool isOpaque;

        Vector2 topTextureCoords;
        Vector2 sideTextureCoords;
        Vector2 bottomTextureCoords;
    };

    class Data
    {
        public:
           Data(const std::string& fileName);

           const Data_Holder& get() const { return m_holder; }

        private:
            Data_Holder m_holder;
    };
}

#endif // BLOCK_DATA_H_INCLUDED
