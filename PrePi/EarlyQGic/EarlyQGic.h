#ifndef __EARLY_QGIC_H__
#define __EARLY_QGIC_H__

#include <Platform/iomap.h>

#define GIC_DIST_REG(off)           (MSM_GIC_DIST_BASE + (off))

#define GIC_DIST_CTRL               GIC_DIST_REG(0x000)
#define GIC_DIST_CTR                GIC_DIST_REG(0x004)
#define GIC_DIST_ENABLE_SET         GIC_DIST_REG(0x100)
#define GIC_DIST_ENABLE_CLEAR       GIC_DIST_REG(0x180)
#define GIC_DIST_PENDING_SET        GIC_DIST_REG(0x200)
#define GIC_DIST_PENDING_CLEAR      GIC_DIST_REG(0x280)
#define GIC_DIST_ACTIVE_BIT         GIC_DIST_REG(0x300)
#define GIC_DIST_PRI                GIC_DIST_REG(0x400)
#define GIC_DIST_TARGET             GIC_DIST_REG(0x800)
#define GIC_DIST_CONFIG             GIC_DIST_REG(0xc00)
#define GIC_DIST_SOFTINT            GIC_DIST_REG(0xf00)

#define GIC_CPU_REG(off)            (MSM_GIC_CPU_BASE  + (off))

#define GIC_CPU_CTRL                GIC_CPU_REG(0x00)
#define GIC_CPU_PRIMASK             GIC_CPU_REG(0x04)
#define GIC_CPU_BINPOINT            GIC_CPU_REG(0x08)
#define GIC_CPU_INTACK              GIC_CPU_REG(0x0c)
#define GIC_CPU_EOI                 GIC_CPU_REG(0x10)
#define GIC_CPU_RUNNINGPRI          GIC_CPU_REG(0x14)
#define GIC_CPU_HIGHPRI             GIC_CPU_REG(0x18)

#endif
