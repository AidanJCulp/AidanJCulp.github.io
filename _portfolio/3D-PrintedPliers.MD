---
title: "Fully 3D-Printed Pliers"
excerpt: "A set of functional, 3D-printed, needle-nose pliers designed with a TPU 95A compressive spring, a TPU 95A pivot, and PLA handles."

header:
  image: /assets/img/PliersRender.png
  teaser: /assets/img/PliersStill.jpeg

gallery:
  - image_path: assets/img/PliersStill.jpeg
  - image_path: assets/img/OldCompressor.jpeg
  - image_path: assets/img/PliersRender.png
  - image_path: assets/img/EllipsePivotAssembly.png

---
---

# Purpose

The goal of this project was to design and prototype a functional pair of needle-nose pliers using 3D-printed components. The design combines rigid PLA handles with flexible TPU 95A components to create a pivot and spring mechanism.

A major focus of the project was exploring **print-in-place and low-assembly mechanisms**. Print-in-place designs create interacting features. Hinges, pivots, and clips can be produced with little assembly. Print-in-place designs depend heavily on **tolerance and clearance**. A clearance fit leaves space between components to permit free movement. A transition fit reduces space for a closer connection. An interference fit makes the components overlap so that force is required for assembly. Selecting the correct fit of the printed parts depends on their function.

Examples that influenced this project include:

- [Needle-Nose Print-in-Place Pliers](https://makerworld.com/en/models/1036900-pliers-needle-nose-print-in-place-three-sizes#profileId-1020896) — an example of a compact needle-nose plier geometry incorporating the mechanism into the printed tool.
- [3D-Printable Pliers](https://makerworld.com/en/models/649072-pliers-3d-printable-tool#profileId-576450) — another functional printed plier design that provided a reference for handle and pivot geometry

---

# Material Selection

Two materials were selected so that different portions of the pliers could perform different mechanical functions. The **handles and jaws were printed from PLA**, providing rigidity needed to transfer force to the jaws. The **pivot and compressive spacer were printed from TPU 95A**. TPU is flexible compared with PLA and can repeatedly deform and return toward its original geometry, making it useful for flexible components.

Using rigid and flexible materials allowed the pliers to combine structural rigidity with elastic behavior. The PLA components carry the majority of the applied load, while the TPU components deform as the handles close. When the user releases the handles, the compressed TPU spacer attempts to return to its original shape and pushes the handles apart.

---

# Design Features

* Rigid PLA needle-nose jaws and handles
* Flexible TPU 95A compressive spring
* Flexible TPU 95A pivot
* Hourglass-shaped pivot geometry to retain the handles
* Slotted pivot that can compress during assembly
* Pivot connects both handles and the spring spacer
* 0.2 mm nominal clearance between components

---

# CAD Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b602811111fffc66e767e07?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true" frameborder="0"></iframe>

---

# Design and Iterative Process

---

## Iteration 1 — Elliptical Compressive Pivot

The first design attempted to combine the pivot and spring functions into a single TPU 95A component. The flexible pivot used an **elliptical cross-section** and included a slit on one side so that it could be compressed. Elliptical holes were modeled into the PLA handles. My idea was that as the handles rotated around the pivot, the elliptical holes would compress the flexible TPU pivot and the elastic deformation of the pivot would attempt to return the pivot to its original shape and rotate the handles back open.

To evaluate the mechanism without printing the complete pliers, the concept was tested using the TPU pivot and two smaller PLA circular test pieces containing the elliptical holes. The pivot used an **hourglass-shaped profile** to keep the two PLA components centered and prevent sliding. However, the concept did not produce an effective spring effect. The friction between the layers were too much for the elastic pivot to overcome.

![Ellipse Pivot Assembly](/assets/img/EllipsePivotAssembly.png)

---

## Iteration 2 — Thin Compressive Spacer

The second iteration separated the spring mechanism from the pivot. The pivot retained its slit but was changed to a **circular pivot**. A separate TPU 95A spacer was then positioned between the handles. The spacer fit around the pivot, allowing the pivot to sit both handles and the flexible component. The handles compressed the TPU spacer, causing the stored elastic energy in the spacer to push the handles apart when the gripping force was removed.

A **0.2 mm clearance** was selected. The pivot was designed with a length of **13 mm** for this iteration.

![Original Compressive Spacer](/assets/img/OldCompressor.jpeg)

---

## Iteration 3 — Enlarged Compressive Spacer

The basic mechanism worked, but the spring force was lower than desired. The TPU 95A spacer was made thicker by increasing the flexible material between the handles. This increased the deformation required to close the pliers and created a stronger restoring force. The geometry of a flexible printed component was adjusted to tune the mechanical behavior of a design without changing materials or adding conventional hardware.

---

## Iteration 4 — Lengthened Pivot and TPU Caps

The final iteration focused on improving stability. The pivot was lengthened to extend completely through the two handles and the compressive spacer. **TPU retaining caps** were then placed at the outer ends of the pivot. These caps prevent the PLA handles from sliding during use. Because the pivot itself is made from TPU 95A and has a slit, it can be compressed during assembly and expand after insertion.

The final architecture separates the mechanism into three primary functions:
1. **PLA handles and jaws** provide rigidity and transmit gripping force.
2. **TPU 95A compressive spacer** provides the spring force that reopens the pliers.
3. **TPU 95A pivot and retaining geometry** connect the components while permitting rotational motion.

---

# Pliers in Operation

The completed pliers operate by squeezing the two PLA handles together. As the handles rotate about the TPU pivot, the handles compress the TPU spacer. This closes the needle-nose jaws and stores elastic energy in the flexible material. When the handles are released, the TPU spacer expands toward its original shape, rotating the handles in the opposite direction and reopening the jaws.

<video autoplay loop muted playsinline style="max-width: 100%; height: auto;">
  <source src="{{ '/assets/img/PliersAction.mp4' | relative_url }}" type="video/mp4">
</video>

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

# Gallery

{% include gallery caption="3D-Printed Pliers — Design Iterations and Final Prototype" %}

---

# References

* [Needle-Nose Print-in-Place Pliers — MakerWorld](https://makerworld.com/en/models/1036900-pliers-needle-nose-print-in-place-three-sizes#profileId-1020896)
* [3D-Printable Pliers — MakerWorld](https://makerworld.com/en/models/649072-pliers-3d-printable-tool#profileId-576450)
