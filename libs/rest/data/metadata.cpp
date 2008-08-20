/*
 * This file is part of the nanogear project
 *
 * (C) Copyright 2008 by Lorenzo Villani <lvillani@binaryhelix.net>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation;
 * version 3 of the License.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#include <string>

#include "metadata.hpp"

namespace nanogear {
namespace rest {
namespace data {

metadata::metadata(const std::string& name)
{
    metadata(name, "");
}

metadata::metadata(const std::string& name, const std::string& description)
{
    m_name = name;
    m_description = description;
}

const std::string& metadata::name()
{
    return m_name;
}


const std::string& metadata::description()
{
    return m_description;
}


}
}
}
