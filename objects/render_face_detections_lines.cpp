/*
* Facial Emotion Recognition in C++ versions 2.0 (Updated on Monday 11 June 2018).
*
* Emotion recognition is done based on facial expressions using image files and the webcam.
*
* Copyright 2017 Open University of the Netherlands (OUNL)
*
* Author: Kiavash Bahreini.
* Organization: Open University of the Netherlands (OUNL).
* Project: The RAGE project
* Project URL: http://rageproject.eu.
* Task: T2.3 of the RAGE project; Development of assets for emotion detection.
*
* For any questions please contact:
*
* Kiavash Bahreini via kiavash.bahreini [AT] ou [DOT] nl
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* This project has received funding from the European Union’s Horizon
* 2020 research and innovation programme under grant agreement No 644187.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

/*
* This code is based on the dlib c++ library.
*
* URL: http://dlib.net/.
*/

/*
* In order to capture the video from a camera this code uses
* the Opencv version 2.4.11 and/or higher.
* URL: https://sourceforge.net/projects/opencvlibrary/files/opencv-win/
*/
#ifndef DLIB_RENDER_FACE_DeTECTIONS_LINES_H_
#define DLIB_RENDER_FACE_DeTECTIONS_LINES_H_

#include <dlib/image_processing/full_object_detection.h>
#include <dlib/gui_widgets.h>
#include <dlib/image_processing/render_face_detections_abstract.h>
#include <vector>

namespace dlib
{
	inline std::vector<image_window::overlay_line> render_face_detections_lines(
		const std::vector<full_object_detection>& dets,
		const rgb_pixel color = rgb_pixel(0, 255, 0)
		)
	{
		std::vector<image_window::overlay_line> lines;
		for (unsigned long i = 0; i < dets.size(); ++i)
		{
			DLIB_CASSERT(dets[i].num_parts() == 68,
				"\t std::vector<image_window::overlay_line> render_face_detections_lines()"
				<< "\n\t Invalid inputs were given to this function. "
				<< "\n\t dets[" << i << "].num_parts():  " << dets[i].num_parts()
				);

			const full_object_detection& d = dets[i];

			lines.push_back(image_window::overlay_line(d.part(17), d.part(36), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(17), d.part(39), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(19), d.part(36), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(19), d.part(39), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(21), d.part(36), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(21), d.part(39), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(22), d.part(42), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(22), d.part(45), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(24), d.part(42), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(24), d.part(45), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(26), d.part(42), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(26), d.part(45), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(43), d.part(47), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(43), d.part(46), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(44), d.part(47), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(44), d.part(46), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(48), d.part(54), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(51), d.part(57), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(51), d.part(48), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(51), d.part(54), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(57), d.part(48), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(57), d.part(54), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(19), d.part(17), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(19), d.part(21), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(24), d.part(22), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(24), d.part(26), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(21), d.part(22), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(36), d.part(39), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(42), d.part(45), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(37), d.part(41), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(37), d.part(40), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(38), d.part(41), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(38), d.part(40), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(36), d.part(48), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(39), d.part(51), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(42), d.part(51), rgb_pixel(0, 0, 255)));
			lines.push_back(image_window::overlay_line(d.part(45), d.part(54), rgb_pixel(0, 0, 255)));
		}
		return lines;
	}

	// ----------------------------------------------------------------------------------------

	inline std::vector<image_window::overlay_line> render_face_detections_lines(
		const full_object_detection& det,
		const rgb_pixel color = rgb_pixel(0, 255, 0)
		)
	{
		std::vector<full_object_detection> dets;
		dets.push_back(det);
		return render_face_detections_lines(dets, color);
	}

	// ----------------------------------------------------------------------------------------
}

#endif // DLIB_RENDER_FACE_DeTECTIONS_LINES_H_

