#include "Liquid_Shader.h"

#include "../Maths/Matrix_Maths.h"

namespace Shader
{
    Liqud_Shader::Liqud_Shader()
    :   Simple_Shader   ("Liquid_Vertex", "Liquid_Fragment")
    {
        getUniformLocations();

        bind();
        loadMatrix4(m_locationProjMatrix, Maths::createProjMatrix());
        unbind();
    }
}
