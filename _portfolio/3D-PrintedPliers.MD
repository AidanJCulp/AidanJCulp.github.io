---
title: "Fully 3D-Printed Pliers"
excerpt: "A set of functional needle-nose pliers designed around 3D-printed rigid PLA handles and flexible TPU 95A components, using a compressive spring and custom pivot mechanism."

header:
  image: /assets/img/PliersRender.png
  teaser: /assets/img/PliersStill.jpeg

gallery:
  - image_path: assets/img/PliersStill.jpeg
  - image_path: assets/img/OldCompressor.jpeg
  - image_path: assets/img/PliersRender.png
  - image_path: assets/img/EllipsePivotAssembly.png

---

# Purpose

The goal of this project was to design and prototype a functional pair of needle-nose pliers primarily using 3D-printed components. The design combines rigid PLA handles with flexible TPU 95A components to create a pivot and compressive spring mechanism without relying on a conventional metal torsion spring.

A major focus of the project was exploring **print-in-place and low-assembly mechanisms**. Print-in-place designs create multiple interacting features in their final positions during the printing process. Hinges, pivots, gears, clips, and other moving mechanisms can therefore be produced with little or no post-print assembly. For example, print-in-place hinges can incorporate the two moving bodies and their pivot directly into the printed geometry. Similar techniques have been used for functional bag clips containing multiple integrated hinges and for other articulated mechanisms.

Print-in-place designs depend heavily on **tolerance and clearance**. A clearance fit leaves enough space between components to permit free movement. A transition fit reduces that space to produce a closer-fitting connection, while an interference fit intentionally makes the components overlap dimensionally so that force is required for assembly. Selecting the correct fit allows printed parts to move, flex, snap together, or remain securely connected depending on their function.

Examples that influenced this project include:

- [Needle-Nose Print-in-Place Pliers](https://makerworld.com/en/models/1036900-pliers-needle-nose-print-in-place-three-sizes#profileId-1020896) — an example of a compact needle-nose plier geometry incorporating the mechanism into the printed tool.
- [3D-Printable Pliers](https://makerworld.com/en/models/649072-pliers-3d-printable-tool#profileId-576450) — another functional printed plier design that provided a reference for handle and pivot geometry.
- [Prusa Print-in-Place Bag Clip](https://blog.prusa3d.com/quick-prints-contest-winners_60523/) — demonstrates how multiple hinges can be incorporated directly into a functional print-in-place mechanism.
- [Examples of 3D-Printed Hinges](https://all3dp.com/2/3d-printed-hinge-great-curated-models-to-3d-print/) — demonstrates applications of printed hinges in doors, containers, clips, and other articulated parts.

---

# Material Selection

Two materials were selected so that different portions of the pliers could perform different mechanical functions.

The **handles and jaws were printed from PLA**, providing the rigidity needed to transfer force from the user's hand to the jaws. PLA also offers good dimensional accuracy, making it useful for maintaining the geometry of the pivot and gripping surfaces.

The **pivot and compressive spacer were printed from TPU 95A**. TPU is flexible compared with PLA and can repeatedly deform and return toward its original geometry. This makes it useful for components that need to behave similarly to rubber, such as flexible joints, spacers, dampers, and spring-like mechanisms.

Using rigid and flexible materials together allowed the pliers to combine structural rigidity with elastic behavior. The PLA components carry the majority of the applied load, while the TPU components deform as the handles close. When the user releases the handles, the compressed TPU spacer attempts to return to its original shape and pushes the handles apart.

For multi-material printing, printer capabilities and material compatibility must still be considered. PLA and TPU 95A can be used together experimentally on some dual-extrusion systems, but printing the components separately and assembling them also avoids many of the challenges associated with flexible-filament dual extrusion.

---

# Design Features

* Rigid PLA needle-nose jaws and handles
* Flexible TPU 95A compressive spring
* Flexible TPU 95A pivot
* Hourglass-shaped pivot geometry to retain the handles
* Slotted pivot that can compress during assembly
* Pivot connects both handles and the spring spacer
* 0.2 mm nominal clearance between mating components
* Spring-assisted opening after the handles are released
* Fully 3D-printed functional mechanism
* Replaceable flexible components

---

# CAD Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b602811111fffc66e767e07?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true" frameborder="0"></iframe>

---

# Design and Iterative Process

Developing the pliers required several iterations of the pivot and spring mechanism. The primary challenge was creating enough elastic force to reopen the handles while simultaneously keeping both handles securely attached to the pivot.

## Iteration 1 — Elliptical Compressive Pivot

The first design attempted to combine the pivot and spring functions into a single TPU 95A component. The flexible pivot used an **elliptical cross-section** and included a slit along one side so that it could be compressed during assembly.

Corresponding elliptical holes were modeled into the PLA handles. As the handles rotated around the pivot, the changing orientation of the elliptical holes compressed the flexible TPU pivot. Closing the pliers therefore required elastic deformation of the pivot. Once the applied force was removed, the TPU would attempt to return to its original shape and rotate the handles back into their open position.

To evaluate the mechanism without printing the complete pliers, the concept was tested using the TPU pivot and two smaller PLA circular test pieces containing the elliptical holes.

The pivot also used an **hourglass-shaped profile** intended to keep the two PLA components centered and prevent them from sliding off the pivot.

Although the concept produced a spring effect, retention was unreliable. The handles could work themselves off the pivot, and the flexible pivot could slip relative to the surrounding PLA components. This demonstrated that the spring and retention functions needed to be separated.

![Ellipse Pivot Assembly](/assets/img/EllipsePivotAssembly.png)

---

## Iteration 2 — Thin Compressive Spacer

The second iteration separated the spring mechanism from the pivot.

The pivot retained its compressible slit but was changed from an elliptical cross-section to a **circular pivot**. A separate TPU 95A spacer was then positioned between the rear portions of the handles. The spacer fit around the pivot, allowing the pivot to locate both handles and the flexible spring component simultaneously.

When the handles were squeezed together, their rear sections compressed the TPU spacer. The stored elastic energy in the spacer then pushed the handles apart when the gripping force was removed.

A **0.2 mm clearance** was selected for the mating connections between components. This provided enough space for assembly and rotation while keeping the mechanism relatively tight.

The pivot was designed with a length of **13 mm** for this iteration.

![Original Compressive Spacer](/assets/img/OldCompressor.jpeg)

---

## Iteration 3 — Enlarged Compressive Spacer

Testing the thin spacer showed that the basic mechanism worked, but the spring force was lower than desired.

The TPU 95A spacer was therefore made substantially thicker. Increasing the amount of flexible material between the handles increased the deformation required to close the pliers and created a stronger restoring force when the handles were released.

This iteration demonstrated how the geometry of a flexible printed component can be adjusted to tune the mechanical behavior of a design without changing materials or adding conventional hardware.

---

## Iteration 4 — Lengthened Pivot and TPU Caps

The final iteration focused primarily on improving retention.

The pivot was lengthened so that it extended completely through the two handles and the compressive spacer. **TPU retaining caps** were then placed at the outer ends of the pivot.

These caps prevent the PLA handles from sliding away from the central mechanism during use. Because the pivot itself is made from TPU 95A and contains a slit, it can be compressed during assembly and then expand after being inserted through the handles.

The final architecture separates the mechanism into three primary functions:

1. **PLA handles and jaws** provide rigidity and transmit gripping force.
2. **TPU 95A compressive spacer** provides the spring force that reopens the pliers.
3. **TPU 95A pivot and retaining geometry** connect the components while permitting rotational motion.

This design proved more reliable than attempting to make the pivot simultaneously provide all of the spring force and component retention.

---

# Pliers in Operation

The completed pliers operate by squeezing the two PLA handles together. As the handles rotate about the TPU pivot, the rear sections of the handles compress the TPU spacer. This closes the needle-nose jaws and stores elastic energy in the flexible material.

When the handles are released, the TPU spacer expands toward its original shape, rotating the handles in the opposite direction and reopening the jaws.

![Pliers in Operation](/assets/img/PliersAction.png)

---

# Specifications

| Specification | Dimension |
| --- | :---: |
| Jaw Width | 5 mm |
| Jaw Height | 10 mm |
| Jaw Length | 40 mm |
| Handle Length | 60 mm |
| Pivot Length — Iteration 2 | 13 mm |
| Nominal Part Clearance | 0.2 mm |

---

# Print Settings

| Component | Printer | Material | Infill | Supports | Nozzle |
| --- | --- | --- | :---: | --- | :---: |
| Compressive Spacer | Voron Elastic | TPU 95A | 25% | Everywhere — Snug | 0.6 mm |
| Pivot / Flexible Components | Voron Elastic | TPU 95A | 25% | Everywhere — Snug | 0.6 mm |
| Handles and Jaws | Voron Rigid | PLA | 15% | N/A | 0.4 mm |

---

# Print-in-Place Design Considerations

Print-in-place mechanisms demonstrate an important advantage of additive manufacturing: geometry that would traditionally require multiple manufacturing and assembly operations can sometimes be produced as a single print.

However, the technique introduces several design constraints. If the gap between neighboring components is too small, deposited material can fuse the components together. If the gap is too large, the mechanism can become loose and inaccurate. Overhangs, layer orientation, bridging, support placement, and printer dimensional accuracy also affect whether a mechanism moves successfully after printing.

This project applied the same principles even though its PLA and TPU components were printed separately. The **0.2 mm clearance** between mating features was used to provide movement while limiting unnecessary play. The slotted TPU pivot uses elastic deformation during assembly, while the hourglass and capped geometry provide mechanical retention afterward.

The project also demonstrates how **rigid and flexible materials can complement one another in functional mechanisms**. Rather than treating flexible filament only as a soft exterior material, TPU 95A was incorporated directly into the mechanical system. Its deformation provides the restoring force normally supplied by a separate metal spring, while PLA provides the stiffness necessary for the handles and jaws.

---

# Applications of Print-in-Place Mechanisms

Print-in-place techniques extend well beyond pliers. Existing designs demonstrate their use in **hinges, articulated joints, bag clips, containers, compliant mechanisms, gears, and other moving assemblies**.

A particularly useful example is the print-in-place bag clip highlighted by Prusa, which incorporates two hinges directly into the printed mechanism. One hinge operates the primary jaws while another rotates the locking clasp. This demonstrates how multiple degrees of motion can be incorporated into a single manufactured object without separately installing conventional hinge pins.

Printed hinges have similarly been applied to boxes, doors, containers, chain-like assemblies, and other mechanisms. These applications rely on intentionally designed gaps between adjacent printed surfaces so that the components remain separate after printing.

The same principle guided the development of these pliers: instead of viewing tolerance simply as manufacturing error, **clearance becomes an intentional design feature** that determines how the finished mechanism behaves.

---

# Project Contributions

My primary design contributions to the final pliers included:

* Designing the TPU 95A compressive spring spacer
* Developing and testing the original elliptical spring-pivot concept
* Redesigning the pivot as a circular TPU 95A component
* Adding a slit to the TPU pivot to allow compression during assembly
* Creating an hourglass-style pivot profile to improve handle retention
* Integrating both handles and the compressive spacer around a common pivot
* Selecting a 0.2 mm clearance for mating components
* Increasing the spacer thickness to improve spring force
* Lengthening the final pivot to pass through the complete assembly
* Adding TPU retaining caps to prevent the handles from separating
* Iteratively prototyping the mechanism using both PLA and TPU 95A

---

# Gallery

{% include gallery caption="3D-Printed Pliers — Design Iterations and Final Prototype" %}

---

# References

* [Needle-Nose Print-in-Place Pliers — MakerWorld](https://makerworld.com/en/models/1036900-pliers-needle-nose-print-in-place-three-sizes#profileId-1020896)
* [3D-Printable Pliers — MakerWorld](https://makerworld.com/en/models/649072-pliers-3d-printable-tool#profileId-576450)

---
