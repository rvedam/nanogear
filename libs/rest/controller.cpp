/*
 * Nanogear - C++ web development framework
 *
 * This library is based on Restlet (R) <http://www.restlet.org> by Noelios Technologies
 * Copyright (C) 2005-2008 by Noelios Technologies <http://www.noelios.com>
 * Restlet is a registered trademark of Noelios Technologies. All other marks and
 * trademarks are property of their respective owners.
 *
 * Copyright (C) 2008 Lorenzo Villani.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, version 3 of the License.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#include "restlet.hpp"
#include <stdexcept>

namespace nanogear {
namespace rest {

controller::controller(context c) : m_context(c), m_started(false)
{
}

bool controller::started()
{
    return m_started;
}

bool controller::stopped()
{
    return !started();
}

void controller::set_context(context c)
{
    m_context = c;
}

context controller::context()
{
    return m_context;
}

void controller::start()
{
    m_started = true;
}

void controller::stop()
{
    m_started = false;
}

void controller::handle(data::request req, data::response res)
{
    init(req, res);
}

void controller::init(data::request req, data::response res)
{
    if (stopped()) start()
    if (stopped() or (!started())) throw std::logic_error("Failed to start() service.");
}

}
}