/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <GazeboYarpPlugins/Pose.h>

namespace GazeboYarpPlugins {

// Default constructor
Pose::Pose() :
        WirePortable(),
        x(0),
        y(0),
        z(0),
        roll(0),
        pitch(0),
        yaw(0)
{
}

// Constructor with field values
Pose::Pose(const double x,
           const double y,
           const double z,
           const double roll,
           const double pitch,
           const double yaw) :
        WirePortable(),
        x(x),
        y(y),
        z(z),
        roll(roll),
        pitch(pitch),
        yaw(yaw)
{
}

// Read structure on a Wire
bool Pose::read(yarp::os::idl::WireReader& reader)
{
    if (!read_x(reader)) {
        return false;
    }
    if (!read_y(reader)) {
        return false;
    }
    if (!read_z(reader)) {
        return false;
    }
    if (!read_roll(reader)) {
        return false;
    }
    if (!read_pitch(reader)) {
        return false;
    }
    if (!read_yaw(reader)) {
        return false;
    }
    return !reader.isError();
}

// Read structure on a Connection
bool Pose::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(6)) {
        return false;
    }
    return read(reader);
}

// Write structure on a Wire
bool Pose::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_x(writer)) {
        return false;
    }
    if (!write_y(writer)) {
        return false;
    }
    if (!write_z(writer)) {
        return false;
    }
    if (!write_roll(writer)) {
        return false;
    }
    if (!write_pitch(writer)) {
        return false;
    }
    if (!write_yaw(writer)) {
        return false;
    }
    return !writer.isError();
}

// Write structure on a Connection
bool Pose::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(6)) {
        return false;
    }
    return write(writer);
}

// Convert to a printable string
std::string Pose::toString() const
{
    yarp::os::Bottle b;
    b.read(*this);
    return b.toString();
}

// Editor: default constructor
Pose::Editor::Editor()
{
    group = 0;
    obj_owned = true;
    obj = new Pose;
    dirty_flags(false);
    yarp().setOwner(*this);
}

// Editor: constructor with base class
Pose::Editor::Editor(Pose& obj)
{
    group = 0;
    obj_owned = false;
    edit(obj, false);
    yarp().setOwner(*this);
}

// Editor: destructor
Pose::Editor::~Editor()
{
    if (obj_owned) {
        delete obj;
    }
}

// Editor: edit
bool Pose::Editor::edit(Pose& obj, bool dirty)
{
    if (obj_owned) {
        delete this->obj;
    }
    this->obj = &obj;
    obj_owned = false;
    dirty_flags(dirty);
    return true;
}

// Editor: validity check
bool Pose::Editor::isValid() const
{
    return obj != nullptr;
}

// Editor: state
Pose& Pose::Editor::state()
{
    return *obj;
}

// Editor: grouping begin
void Pose::Editor::start_editing()
{
    group++;
}

// Editor: grouping end
void Pose::Editor::stop_editing()
{
    group--;
    if (group == 0 && is_dirty) {
        communicate();
    }
}
// Editor: x setter
void Pose::Editor::set_x(const double x)
{
    will_set_x();
    obj->x = x;
    mark_dirty_x();
    communicate();
    did_set_x();
}

// Editor: x getter
double Pose::Editor::get_x() const
{
    return obj->x;
}

// Editor: x will_set
bool Pose::Editor::will_set_x()
{
    return true;
}

// Editor: x did_set
bool Pose::Editor::did_set_x()
{
    return true;
}

// Editor: y setter
void Pose::Editor::set_y(const double y)
{
    will_set_y();
    obj->y = y;
    mark_dirty_y();
    communicate();
    did_set_y();
}

// Editor: y getter
double Pose::Editor::get_y() const
{
    return obj->y;
}

// Editor: y will_set
bool Pose::Editor::will_set_y()
{
    return true;
}

// Editor: y did_set
bool Pose::Editor::did_set_y()
{
    return true;
}

// Editor: z setter
void Pose::Editor::set_z(const double z)
{
    will_set_z();
    obj->z = z;
    mark_dirty_z();
    communicate();
    did_set_z();
}

// Editor: z getter
double Pose::Editor::get_z() const
{
    return obj->z;
}

// Editor: z will_set
bool Pose::Editor::will_set_z()
{
    return true;
}

// Editor: z did_set
bool Pose::Editor::did_set_z()
{
    return true;
}

// Editor: roll setter
void Pose::Editor::set_roll(const double roll)
{
    will_set_roll();
    obj->roll = roll;
    mark_dirty_roll();
    communicate();
    did_set_roll();
}

// Editor: roll getter
double Pose::Editor::get_roll() const
{
    return obj->roll;
}

// Editor: roll will_set
bool Pose::Editor::will_set_roll()
{
    return true;
}

// Editor: roll did_set
bool Pose::Editor::did_set_roll()
{
    return true;
}

// Editor: pitch setter
void Pose::Editor::set_pitch(const double pitch)
{
    will_set_pitch();
    obj->pitch = pitch;
    mark_dirty_pitch();
    communicate();
    did_set_pitch();
}

// Editor: pitch getter
double Pose::Editor::get_pitch() const
{
    return obj->pitch;
}

// Editor: pitch will_set
bool Pose::Editor::will_set_pitch()
{
    return true;
}

// Editor: pitch did_set
bool Pose::Editor::did_set_pitch()
{
    return true;
}

// Editor: yaw setter
void Pose::Editor::set_yaw(const double yaw)
{
    will_set_yaw();
    obj->yaw = yaw;
    mark_dirty_yaw();
    communicate();
    did_set_yaw();
}

// Editor: yaw getter
double Pose::Editor::get_yaw() const
{
    return obj->yaw;
}

// Editor: yaw will_set
bool Pose::Editor::will_set_yaw()
{
    return true;
}

// Editor: yaw did_set
bool Pose::Editor::did_set_yaw()
{
    return true;
}

// Editor: clean
void Pose::Editor::clean()
{
    dirty_flags(false);
}

// Editor: read
bool Pose::Editor::read(yarp::os::ConnectionReader& connection)
{
    if (!isValid()) {
        return false;
    }
    yarp::os::idl::WireReader reader(connection);
    reader.expectAccept();
    if (!reader.readListHeader()) {
        return false;
    }
    int len = reader.getLength();
    if (len == 0) {
        yarp::os::idl::WireWriter writer(reader);
        if (writer.isNull()) {
            return true;
        }
        if (!writer.writeListHeader(1)) {
            return false;
        }
        writer.writeString("send: 'help' or 'patch (param1 val1) (param2 val2)'");
        return true;
    }
    std::string tag;
    if (!reader.readString(tag)) {
        return false;
    }
    if (tag == "help") {
        yarp::os::idl::WireWriter writer(reader);
        if (writer.isNull()) {
            return true;
        }
        if (!writer.writeListHeader(2)) {
            return false;
        }
        if (!writer.writeTag("many", 1, 0)) {
            return false;
        }
        if (reader.getLength() > 0) {
            std::string field;
            if (!reader.readString(field)) {
                return false;
            }
            if (field == "x") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("double x")) {
                    return false;
                }
            }
            if (field == "y") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("double y")) {
                    return false;
                }
            }
            if (field == "z") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("double z")) {
                    return false;
                }
            }
            if (field == "roll") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("double roll")) {
                    return false;
                }
            }
            if (field == "pitch") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("double pitch")) {
                    return false;
                }
            }
            if (field == "yaw") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("double yaw")) {
                    return false;
                }
            }
        }
        if (!writer.writeListHeader(7)) {
            return false;
        }
        writer.writeString("*** Available fields:");
        writer.writeString("x");
        writer.writeString("y");
        writer.writeString("z");
        writer.writeString("roll");
        writer.writeString("pitch");
        writer.writeString("yaw");
        return true;
    }
    bool nested = true;
    bool have_act = false;
    if (tag != "patch") {
        if (((len - 1) % 2) != 0) {
            return false;
        }
        len = 1 + ((len - 1) / 2);
        nested = false;
        have_act = true;
    }
    for (int i = 1; i < len; ++i) {
        if (nested && !reader.readListHeader(3)) {
            return false;
        }
        std::string act;
        std::string key;
        if (have_act) {
            act = tag;
        } else if (!reader.readString(act)) {
            return false;
        }
        if (!reader.readString(key)) {
            return false;
        }
        if (key == "x") {
            will_set_x();
            if (!obj->nested_read_x(reader)) {
                return false;
            }
            did_set_x();
        } else if (key == "y") {
            will_set_y();
            if (!obj->nested_read_y(reader)) {
                return false;
            }
            did_set_y();
        } else if (key == "z") {
            will_set_z();
            if (!obj->nested_read_z(reader)) {
                return false;
            }
            did_set_z();
        } else if (key == "roll") {
            will_set_roll();
            if (!obj->nested_read_roll(reader)) {
                return false;
            }
            did_set_roll();
        } else if (key == "pitch") {
            will_set_pitch();
            if (!obj->nested_read_pitch(reader)) {
                return false;
            }
            did_set_pitch();
        } else if (key == "yaw") {
            will_set_yaw();
            if (!obj->nested_read_yaw(reader)) {
                return false;
            }
            did_set_yaw();
        } else {
            // would be useful to have a fallback here
        }
    }
    reader.accept();
    yarp::os::idl::WireWriter writer(reader);
    if (writer.isNull()) {
        return true;
    }
    writer.writeListHeader(1);
    writer.writeVocab32('o', 'k');
    return true;
}

// Editor: write
bool Pose::Editor::write(yarp::os::ConnectionWriter& connection) const
{
    if (!isValid()) {
        return false;
    }
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(dirty_count + 1)) {
        return false;
    }
    if (!writer.writeString("patch")) {
        return false;
    }
    if (is_dirty_x) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("x")) {
            return false;
        }
        if (!obj->nested_write_x(writer)) {
            return false;
        }
    }
    if (is_dirty_y) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("y")) {
            return false;
        }
        if (!obj->nested_write_y(writer)) {
            return false;
        }
    }
    if (is_dirty_z) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("z")) {
            return false;
        }
        if (!obj->nested_write_z(writer)) {
            return false;
        }
    }
    if (is_dirty_roll) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("roll")) {
            return false;
        }
        if (!obj->nested_write_roll(writer)) {
            return false;
        }
    }
    if (is_dirty_pitch) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("pitch")) {
            return false;
        }
        if (!obj->nested_write_pitch(writer)) {
            return false;
        }
    }
    if (is_dirty_yaw) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("yaw")) {
            return false;
        }
        if (!obj->nested_write_yaw(writer)) {
            return false;
        }
    }
    return !writer.isError();
}

// Editor: send if possible
void Pose::Editor::communicate()
{
    if (group != 0) {
        return;
    }
    if (yarp().canWrite()) {
        yarp().write(*this);
        clean();
    }
}

// Editor: mark dirty overall
void Pose::Editor::mark_dirty()
{
    is_dirty = true;
}

// Editor: x mark_dirty
void Pose::Editor::mark_dirty_x()
{
    if (is_dirty_x) {
        return;
    }
    dirty_count++;
    is_dirty_x = true;
    mark_dirty();
}

// Editor: y mark_dirty
void Pose::Editor::mark_dirty_y()
{
    if (is_dirty_y) {
        return;
    }
    dirty_count++;
    is_dirty_y = true;
    mark_dirty();
}

// Editor: z mark_dirty
void Pose::Editor::mark_dirty_z()
{
    if (is_dirty_z) {
        return;
    }
    dirty_count++;
    is_dirty_z = true;
    mark_dirty();
}

// Editor: roll mark_dirty
void Pose::Editor::mark_dirty_roll()
{
    if (is_dirty_roll) {
        return;
    }
    dirty_count++;
    is_dirty_roll = true;
    mark_dirty();
}

// Editor: pitch mark_dirty
void Pose::Editor::mark_dirty_pitch()
{
    if (is_dirty_pitch) {
        return;
    }
    dirty_count++;
    is_dirty_pitch = true;
    mark_dirty();
}

// Editor: yaw mark_dirty
void Pose::Editor::mark_dirty_yaw()
{
    if (is_dirty_yaw) {
        return;
    }
    dirty_count++;
    is_dirty_yaw = true;
    mark_dirty();
}

// Editor: dirty_flags
void Pose::Editor::dirty_flags(bool flag)
{
    is_dirty = flag;
    is_dirty_x = flag;
    is_dirty_y = flag;
    is_dirty_z = flag;
    is_dirty_roll = flag;
    is_dirty_pitch = flag;
    is_dirty_yaw = flag;
    dirty_count = flag ? 6 : 0;
}

// read x field
bool Pose::read_x(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(x)) {
        reader.fail();
        return false;
    }
    return true;
}

// write x field
bool Pose::write_x(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(x)) {
        return false;
    }
    return true;
}

// read (nested) x field
bool Pose::nested_read_x(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(x)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) x field
bool Pose::nested_write_x(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(x)) {
        return false;
    }
    return true;
}

// read y field
bool Pose::read_y(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(y)) {
        reader.fail();
        return false;
    }
    return true;
}

// write y field
bool Pose::write_y(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(y)) {
        return false;
    }
    return true;
}

// read (nested) y field
bool Pose::nested_read_y(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(y)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) y field
bool Pose::nested_write_y(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(y)) {
        return false;
    }
    return true;
}

// read z field
bool Pose::read_z(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(z)) {
        reader.fail();
        return false;
    }
    return true;
}

// write z field
bool Pose::write_z(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(z)) {
        return false;
    }
    return true;
}

// read (nested) z field
bool Pose::nested_read_z(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(z)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) z field
bool Pose::nested_write_z(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(z)) {
        return false;
    }
    return true;
}

// read roll field
bool Pose::read_roll(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(roll)) {
        reader.fail();
        return false;
    }
    return true;
}

// write roll field
bool Pose::write_roll(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(roll)) {
        return false;
    }
    return true;
}

// read (nested) roll field
bool Pose::nested_read_roll(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(roll)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) roll field
bool Pose::nested_write_roll(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(roll)) {
        return false;
    }
    return true;
}

// read pitch field
bool Pose::read_pitch(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(pitch)) {
        reader.fail();
        return false;
    }
    return true;
}

// write pitch field
bool Pose::write_pitch(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(pitch)) {
        return false;
    }
    return true;
}

// read (nested) pitch field
bool Pose::nested_read_pitch(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(pitch)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) pitch field
bool Pose::nested_write_pitch(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(pitch)) {
        return false;
    }
    return true;
}

// read yaw field
bool Pose::read_yaw(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(yaw)) {
        reader.fail();
        return false;
    }
    return true;
}

// write yaw field
bool Pose::write_yaw(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(yaw)) {
        return false;
    }
    return true;
}

// read (nested) yaw field
bool Pose::nested_read_yaw(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(yaw)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) yaw field
bool Pose::nested_write_yaw(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(yaw)) {
        return false;
    }
    return true;
}

} // namespace GazeboYarpPlugins
